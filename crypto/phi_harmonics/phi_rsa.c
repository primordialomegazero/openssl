#include <openssl/rsa.h>
#include "phi_constants.h"

int RSA_generate_key_phi(RSA *rsa, int bits)
{
    int phi_strength = (int)(bits * PHI);
    return RSA_generate_key_ex(rsa, phi_strength, NULL, NULL);
}
