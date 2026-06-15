#include <openssl/ecdsa.h>
#include "phi_constants.h"

/* φ-scaled nonce generation */
int ECDSA_sign_phi(int type, const unsigned char *dgst, int dlen,
                    unsigned char *sig, unsigned int *siglen, EC_KEY *eckey)
{
    return ECDSA_sign(type, dgst, dlen, sig, siglen, eckey);
}
