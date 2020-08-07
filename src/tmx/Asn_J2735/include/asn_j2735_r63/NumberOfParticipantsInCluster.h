/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -fskeletons-copy`
 */

#ifndef	_NumberOfParticipantsInCluster_H_
#define	_NumberOfParticipantsInCluster_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NumberOfParticipantsInCluster {
	NumberOfParticipantsInCluster_unavailable	= 0,
	NumberOfParticipantsInCluster_small	= 1,
	NumberOfParticipantsInCluster_medium	= 2,
	NumberOfParticipantsInCluster_large	= 3
	/*
	 * Enumeration is extensible
	 */
} e_NumberOfParticipantsInCluster;

/* NumberOfParticipantsInCluster */
typedef long	 NumberOfParticipantsInCluster_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NumberOfParticipantsInCluster_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NumberOfParticipantsInCluster;
extern const asn_INTEGER_specifics_t asn_SPC_NumberOfParticipantsInCluster_specs_1;
asn_struct_free_f NumberOfParticipantsInCluster_free;
asn_struct_print_f NumberOfParticipantsInCluster_print;
asn_constr_check_f NumberOfParticipantsInCluster_constraint;
ber_type_decoder_f NumberOfParticipantsInCluster_decode_ber;
der_type_encoder_f NumberOfParticipantsInCluster_encode_der;
xer_type_decoder_f NumberOfParticipantsInCluster_decode_xer;
xer_type_encoder_f NumberOfParticipantsInCluster_encode_xer;
oer_type_decoder_f NumberOfParticipantsInCluster_decode_oer;
oer_type_encoder_f NumberOfParticipantsInCluster_encode_oer;
per_type_decoder_f NumberOfParticipantsInCluster_decode_uper;
per_type_encoder_f NumberOfParticipantsInCluster_encode_uper;
per_type_decoder_f NumberOfParticipantsInCluster_decode_aper;
per_type_encoder_f NumberOfParticipantsInCluster_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NumberOfParticipantsInCluster_H_ */
#include "asn_internal.h"
