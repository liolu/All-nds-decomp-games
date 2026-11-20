#include "m2c.h"

s32 func_02013f54(void *, s32);                     /* extern */

s32 func_02013ef0(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x464) != 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x684) != 0) {
        return 0;
    }
    temp_r0 = func_02013f54(arg0, M2C_FIELD(arg0, s32 *, 0x67C));
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0 == M2C_FIELD(arg0, s32 *, 0x67C)) {
        return 0;
    }
    if (M2C_FIELD((arg0 + (temp_r0 * 4)), s32 *, 0x574) != 0) {
        return 1;
    }
    return 0;
}
