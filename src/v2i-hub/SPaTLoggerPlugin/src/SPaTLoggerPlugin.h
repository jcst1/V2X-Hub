
/**
 * Copyright (C) 2019 LEIDOS.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this plogFile except in compliance with the License. You may obtain a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 */

#ifndef TMX_PLUGINS_SPATLOGGERPLUGIN_H_
#define TMX_PLUGINS_SPATLOGGERPLUGIN_H_



#include "PluginClient.h"
#include "PluginDataMonitor.h"

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <atomic>
#include <thread>
#include <../../../tmx/TmxApi/tmx/json/cJSON.h>
#include <tmx/messages/IvpJ2735.h>
#include <tmx/j2735_messages/SpatMessage.hpp>
#include <SPAT.h>
#include <tmx/messages/auto_message.hpp>
#include <boost/filesystem.hpp>

using namespace std;
using namespace tmx;
using namespace tmx::utils;
using namespace tmx::messages;
using namespace boost::filesystem;


namespace SPaTLoggerPlugin
{


#define BYTESTOMB 1048576

/**
 * This plugin logs the SPaT messages received in the following CSV format.
 */
class SPaTLoggerPlugin: public PluginClient
{
public:
	SPaTLoggerPlugin(std::string);
	virtual ~SPaTLoggerPlugin();
	int Main();
protected:
	void UpdateConfigSettings();

	// Virtual method overrides.
	void OnConfigChanged(const char *key, const char *value);
	void OnStateChange(IvpPluginState state);

	void HandleSpatMessage(SpatMessage &msg, routeable_message &routeableMsg);
	void GetInt32(unsigned char *buf, int32_t *value)
	{
		*value = (int32_t)((buf[0] << 24) + (buf[1] << 16) + (buf[2] << 8) + buf[3]);
	}
private:
	std::atomic<uint64_t> _frequency{0};
	DATA_MONITOR(_frequency);   // Declares the

	void OpenSPaTLogFile();
	void CheckSPaTLogFileSizeAndRename();
	std::string  GetCurDateTimeStr();

        std::ofstream _logFile;
        std::ofstream _logFilebin;
        std::string _cvmsgtype;
        std::string _filename, _fileDirectory;
        std::string _curFilename;
        std::string _curFilenamebin;
        std::string _newFilename;
        std::string _curFilenamesize;
        int _logFilesize;
        int _logFilebinsize;
        int _maxFilesizeInMB;

};
std::mutex _cfgLock;


} /* namespace SPaTLoggerPlugin */

#endif /* SPaTLoggerPlugin.h */
