/**
 * Port Drayage Web Service.
 * Web Service for Loading/Unloading/Inspection interactions for Port Drayage Operations.
 *
 * The version of the OpenAPI document: 1.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIDefaultApi_H
#define OAI_OAIDefaultApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"

#include "OAIActionStatusList.h"
#include "OAIContainerActionStatus.h"
#include "OAIContainerRequest.h"
#include "OAIInspectionRequest.h"
#include "OAIInspectionStatus.h"
#include "OAIInspectionStatusList.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIDefaultApi : public QObject {
    Q_OBJECT

public:
    OAIDefaultApi(const int timeOut = 0);
    ~OAIDefaultApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  action_id QString [required]
    */
    void inspectionActionIdGet(const QString &action_id);

    /**
    * @param[in]  action_id QString [required]
    */
    void inspectionCompleteActionIdPost(const QString &action_id);

    /**
    * @param[in]  action_id QString [required]
    */
    void inspectionHoldActionIdPost(const QString &action_id);

    /**
    * @param[in]  action_id QString [required]
    */
    void inspectionHoldingActionIdPost(const QString &action_id);


    void inspectionPendingGet();

    /**
    * @param[in]  oai_inspection_request OAIInspectionRequest [required]
    */
    void inspectionPost(const OAIInspectionRequest &oai_inspection_request);

    /**
    * @param[in]  action_id QString [required]
    */
    void loadingActionIdGet(const QString &action_id);

    /**
    * @param[in]  action_id QString [required]
    */
    void loadingCompleteActionIdPost(const QString &action_id);


    void loadingPendingGet();

    /**
    * @param[in]  oai_container_request OAIContainerRequest [required]
    */
    void loadingPost(const OAIContainerRequest &oai_container_request);

    /**
    * @param[in]  action_id QString [required]
    */
    void loadingStartActionIdPost(const QString &action_id);

    /**
    * @param[in]  action_id QString [required]
    */
    void unloadingActionIdGet(const QString &action_id);

    /**
    * @param[in]  action_id QString [required]
    */
    void unloadingCompleteActionIdPost(const QString &action_id);


    void unloadingPendingGet();

    /**
    * @param[in]  oai_container_request OAIContainerRequest [required]
    */
    void unloadingPost(const OAIContainerRequest &oai_container_request);

    /**
    * @param[in]  action_id QString [required]
    */
    void unloadingStartActionIdPost(const QString &action_id);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;

    void inspectionActionIdGetCallback(OAIHttpRequestWorker *worker);
    void inspectionCompleteActionIdPostCallback(OAIHttpRequestWorker *worker);
    void inspectionHoldActionIdPostCallback(OAIHttpRequestWorker *worker);
    void inspectionHoldingActionIdPostCallback(OAIHttpRequestWorker *worker);
    void inspectionPendingGetCallback(OAIHttpRequestWorker *worker);
    void inspectionPostCallback(OAIHttpRequestWorker *worker);
    void loadingActionIdGetCallback(OAIHttpRequestWorker *worker);
    void loadingCompleteActionIdPostCallback(OAIHttpRequestWorker *worker);
    void loadingPendingGetCallback(OAIHttpRequestWorker *worker);
    void loadingPostCallback(OAIHttpRequestWorker *worker);
    void loadingStartActionIdPostCallback(OAIHttpRequestWorker *worker);
    void unloadingActionIdGetCallback(OAIHttpRequestWorker *worker);
    void unloadingCompleteActionIdPostCallback(OAIHttpRequestWorker *worker);
    void unloadingPendingGetCallback(OAIHttpRequestWorker *worker);
    void unloadingPostCallback(OAIHttpRequestWorker *worker);
    void unloadingStartActionIdPostCallback(OAIHttpRequestWorker *worker);

signals:

    void inspectionActionIdGetSignal(OAIInspectionStatus summary);
    void inspectionCompleteActionIdPostSignal();
    void inspectionHoldActionIdPostSignal();
    void inspectionHoldingActionIdPostSignal();
    void inspectionPendingGetSignal(OAIInspectionStatusList summary);
    void inspectionPostSignal();
    void loadingActionIdGetSignal(OAIContainerActionStatus summary);
    void loadingCompleteActionIdPostSignal();
    void loadingPendingGetSignal(OAIActionStatusList summary);
    void loadingPostSignal();
    void loadingStartActionIdPostSignal();
    void unloadingActionIdGetSignal(OAIContainerActionStatus summary);
    void unloadingCompleteActionIdPostSignal();
    void unloadingPendingGetSignal(OAIActionStatusList summary);
    void unloadingPostSignal();
    void unloadingStartActionIdPostSignal();

    void inspectionActionIdGetSignalFull(OAIHttpRequestWorker *worker, OAIInspectionStatus summary);
    void inspectionCompleteActionIdPostSignalFull(OAIHttpRequestWorker *worker);
    void inspectionHoldActionIdPostSignalFull(OAIHttpRequestWorker *worker);
    void inspectionHoldingActionIdPostSignalFull(OAIHttpRequestWorker *worker);
    void inspectionPendingGetSignalFull(OAIHttpRequestWorker *worker, OAIInspectionStatusList summary);
    void inspectionPostSignalFull(OAIHttpRequestWorker *worker);
    void loadingActionIdGetSignalFull(OAIHttpRequestWorker *worker, OAIContainerActionStatus summary);
    void loadingCompleteActionIdPostSignalFull(OAIHttpRequestWorker *worker);
    void loadingPendingGetSignalFull(OAIHttpRequestWorker *worker, OAIActionStatusList summary);
    void loadingPostSignalFull(OAIHttpRequestWorker *worker);
    void loadingStartActionIdPostSignalFull(OAIHttpRequestWorker *worker);
    void unloadingActionIdGetSignalFull(OAIHttpRequestWorker *worker, OAIContainerActionStatus summary);
    void unloadingCompleteActionIdPostSignalFull(OAIHttpRequestWorker *worker);
    void unloadingPendingGetSignalFull(OAIHttpRequestWorker *worker, OAIActionStatusList summary);
    void unloadingPostSignalFull(OAIHttpRequestWorker *worker);
    void unloadingStartActionIdPostSignalFull(OAIHttpRequestWorker *worker);

    void inspectionActionIdGetSignalE(OAIInspectionStatus summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inspectionCompleteActionIdPostSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void inspectionHoldActionIdPostSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void inspectionHoldingActionIdPostSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void inspectionPendingGetSignalE(OAIInspectionStatusList summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inspectionPostSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void loadingActionIdGetSignalE(OAIContainerActionStatus summary, QNetworkReply::NetworkError error_type, QString error_str);
    void loadingCompleteActionIdPostSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void loadingPendingGetSignalE(OAIActionStatusList summary, QNetworkReply::NetworkError error_type, QString error_str);
    void loadingPostSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void loadingStartActionIdPostSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void unloadingActionIdGetSignalE(OAIContainerActionStatus summary, QNetworkReply::NetworkError error_type, QString error_str);
    void unloadingCompleteActionIdPostSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void unloadingPendingGetSignalE(OAIActionStatusList summary, QNetworkReply::NetworkError error_type, QString error_str);
    void unloadingPostSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void unloadingStartActionIdPostSignalE(QNetworkReply::NetworkError error_type, QString error_str);

    void inspectionActionIdGetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inspectionCompleteActionIdPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inspectionHoldActionIdPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inspectionHoldingActionIdPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inspectionPendingGetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inspectionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void loadingActionIdGetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void loadingCompleteActionIdPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void loadingPendingGetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void loadingPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void loadingStartActionIdPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unloadingActionIdGetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unloadingCompleteActionIdPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unloadingPendingGetSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unloadingPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unloadingStartActionIdPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();
};

} // namespace OpenAPI
#endif
