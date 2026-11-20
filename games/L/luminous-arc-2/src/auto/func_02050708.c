#include "m2c.h"

s32 func_02050708(u32 *arg0, u32 *arg1) {
    u32 temp_r0;
    u32 temp_r2;

    temp_r2 = *arg0;
    temp_r0 = *arg1;
    if (temp_r2 == temp_r0) {
        return 0;
    }
    if (temp_r2 < temp_r0) {
        return 1;
    }
    return -1;
}
