#include <openssl/hmac.h>
#include "phi_constants.h"

#define PHI_HMAC_ROUNDS 8

int HMAC_Init_phi(HMAC_CTX *ctx, const void *key, int keylen, const EVP_MD *md)
{
    return HMAC_Init_ex(ctx, key, keylen, md, NULL);
}
