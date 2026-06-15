#include <openssl/aes.h>
#include "phi_constants.h"

void AES_set_encrypt_key_phi(const unsigned char *userKey, const int bits, AES_KEY *key)
{
    AES_set_encrypt_key(userKey, bits, key);
}
