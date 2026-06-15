#include "phi_constants.h"

#define PHI_NOISE_VAR (INV_PHI)

static void phi_sample_noise(uint16_t *r, size_t len)
{
    for (size_t i = 0; i < len; i++)
        r[i] = (uint16_t)(rand() * INV_PHI);
}
