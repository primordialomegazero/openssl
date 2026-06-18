#ifndef OSSL_CRYPTO_SCHNORR_H
#define OSSL_CRYPTO_SCHNORR_H

#include <openssl/evp.h>

int schnorr_sign(EVP_MD_CTX *ctx, unsigned char *sig, size_t *siglen,
                  const unsigned char *tbs, size_t tbslen);
int schnorr_verify(EVP_MD_CTX *ctx, const unsigned char *sig, size_t siglen,
                    const unsigned char *tbs, size_t tbslen);
int schnorr_keygen(EVP_PKEY_CTX *ctx, EVP_PKEY *pkey);

#endif
