// SPDX-License-Identifier: MIT

#include <stdlib.h>

#include <oqs/kem_frodokem.h>

#ifdef OQS_ENABLE_KEM_frodokem_1344_aes

OQS_KEM *OQS_KEM_frodokem_1344_aes_new(void) {

	OQS_KEM *kem = OQS_MEM_malloc(sizeof(OQS_KEM));
	if (kem == NULL) {
		return NULL;
	}
	kem->method_name = OQS_KEM_alg_frodokem_1344_aes;
	kem->alg_version = "https://github.com/Microsoft/PQCrypto-LWEKE/commit/669522db63850fa64d1a24a47e138e80a59349db";

	kem->claimed_nist_level = 5;
	kem->ind_cca = true;

	kem->length_public_key = OQS_KEM_frodokem_1344_aes_length_public_key;
	kem->length_secret_key = OQS_KEM_frodokem_1344_aes_length_secret_key;
	kem->length_ciphertext = OQS_KEM_frodokem_1344_aes_length_ciphertext;
	kem->length_shared_secret = OQS_KEM_frodokem_1344_aes_length_shared_secret;
	kem->length_keypair_seed = OQS_KEM_frodokem_1344_aes_length_keypair_seed;

	kem->keypair = OQS_KEM_frodokem_1344_aes_keypair;
	kem->keypair_derand = OQS_KEM_frodokem_1344_aes_keypair_derand;
	kem->encaps = OQS_KEM_frodokem_1344_aes_encaps;
	kem->decaps = OQS_KEM_frodokem_1344_aes_decaps;

	return kem;
}

#endif
