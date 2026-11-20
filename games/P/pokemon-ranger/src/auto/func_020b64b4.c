#include "m2c.h"

s32 func_020b64b4(s32 *arg0) {
    s32 temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 != 0) {
        *arg0 = temp_r1 - 1;
    }
    return *arg0;
}
