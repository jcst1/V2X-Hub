/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#include "TrafficControlPackage.h"

static int check_permitted_alphabet_2(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv <= 127)) return -1;
	}
	return 0;
}

static int
memb_label_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 63)
		 && !check_permitted_alphabet_2(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_tcids_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 63)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_tcids_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..63)) */};
static asn_per_constraints_t asn_PER_type_tcids_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_label_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..63)) */};
static asn_per_constraints_t asn_PER_memb_label_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER character map necessary */
};
static asn_oer_constraints_t asn_OER_memb_tcids_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..63)) */};
static asn_per_constraints_t asn_PER_memb_tcids_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tcids_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_Id128b,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_tcids_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_tcids_specs_3 = {
	sizeof(struct TrafficControlPackage__tcids),
	offsetof(struct TrafficControlPackage__tcids, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tcids_3 = {
	"tcids",
	"tcids",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_tcids_tags_3,
	sizeof(asn_DEF_tcids_tags_3)
		/sizeof(asn_DEF_tcids_tags_3[0]) - 1, /* 1 */
	asn_DEF_tcids_tags_3,	/* Same as above */
	sizeof(asn_DEF_tcids_tags_3)
		/sizeof(asn_DEF_tcids_tags_3[0]), /* 2 */
	{ &asn_OER_type_tcids_constr_3, &asn_PER_type_tcids_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_tcids_3,
	1,	/* Single element */
	&asn_SPC_tcids_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TrafficControlPackage_1[] = {
	{ ATF_POINTER, 1, offsetof(struct TrafficControlPackage, label),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_label_constr_2, &asn_PER_memb_label_constr_2,  memb_label_constraint_1 },
		0, 0, /* No default value */
		"label"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlPackage, tcids),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tcids_3,
		0,
		{ &asn_OER_memb_tcids_constr_3, &asn_PER_memb_tcids_constr_3,  memb_tcids_constraint_1 },
		0, 0, /* No default value */
		"tcids"
		},
};
static const int asn_MAP_TrafficControlPackage_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_TrafficControlPackage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TrafficControlPackage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* label */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tcids */
};
asn_SEQUENCE_specifics_t asn_SPC_TrafficControlPackage_specs_1 = {
	sizeof(struct TrafficControlPackage),
	offsetof(struct TrafficControlPackage, _asn_ctx),
	asn_MAP_TrafficControlPackage_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_TrafficControlPackage_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TrafficControlPackage = {
	"TrafficControlPackage",
	"TrafficControlPackage",
	&asn_OP_SEQUENCE,
	asn_DEF_TrafficControlPackage_tags_1,
	sizeof(asn_DEF_TrafficControlPackage_tags_1)
		/sizeof(asn_DEF_TrafficControlPackage_tags_1[0]), /* 1 */
	asn_DEF_TrafficControlPackage_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrafficControlPackage_tags_1)
		/sizeof(asn_DEF_TrafficControlPackage_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TrafficControlPackage_1,
	2,	/* Elements count */
	&asn_SPC_TrafficControlPackage_specs_1	/* Additional specs */
};

