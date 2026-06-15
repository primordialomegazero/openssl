#include "phi_constants.h"

#define PHI_REJECT_THRESHOLD 423

static int phi_reject_sample(uint32_t *coeff)
{
    return (*coeff < PHI_REJECT_THRESHOLD) ? 1 : 0;
}
