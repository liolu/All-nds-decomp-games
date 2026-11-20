#include "m2c.h"

u32 func_020b64cc(u32 *arg0) {
    u32 temp_r2;

    temp_r2 = *arg0;
    if (temp_r2 < 0xFFFFU) {
        *arg0 = temp_r2 + 1;
    }
    return *arg0;
}
