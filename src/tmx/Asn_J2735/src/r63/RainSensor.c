/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#include "RainSensor.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_RainSensor_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_RainSensor_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RainSensor_value2enum_1[] = {
	{ 0,	4,	"none" },
	{ 1,	9,	"lightMist" },
	{ 2,	9,	"heavyMist" },
	{ 3,	18,	"lightRainOrDrizzle" },
	{ 4,	4,	"rain" },
	{ 5,	12,	"moderateRain" },
	{ 6,	9,	"heavyRain" },
	{ 7,	13,	"heavyDownpour" }
};
static const unsigned int asn_MAP_RainSensor_enum2value_1[] = {
	7,	/* heavyDownpour(7) */
	2,	/* heavyMist(2) */
	6,	/* heavyRain(6) */
	1,	/* lightMist(1) */
	3,	/* lightRainOrDrizzle(3) */
	5,	/* moderateRain(5) */
	0,	/* none(0) */
	4	/* rain(4) */
};
const asn_INTEGER_specifics_t asn_SPC_RainSensor_specs_1 = {
	asn_MAP_RainSensor_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RainSensor_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RainSensor_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RainSensor = {
	"RainSensor",
	"RainSensor",
	&asn_OP_NativeEnumerated,
	asn_DEF_RainSensor_tags_1,
	sizeof(asn_DEF_RainSensor_tags_1)
		/sizeof(asn_DEF_RainSensor_tags_1[0]), /* 1 */
	asn_DEF_RainSensor_tags_1,	/* Same as above */
	sizeof(asn_DEF_RainSensor_tags_1)
		/sizeof(asn_DEF_RainSensor_tags_1[0]), /* 1 */
	{ &asn_OER_type_RainSensor_constr_1, &asn_PER_type_RainSensor_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RainSensor_specs_1	/* Additional specs */
};

