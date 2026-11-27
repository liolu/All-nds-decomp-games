#include "m2c.h"

s32 func_0200bf00();                                /* extern */

s32 func_0200bf50(void **arg0) {
    s32 var_r0;
    void *temp_r1;

    if (func_0200bf00() != 0) {
        temp_r1 = *arg0;
        if (M2C_FIELD(temp_r1, s32 *, 0x20) == 2) {
            if (((u32) (M2C_FIELD(temp_r1, u16 *, 0x98) << 0x1E) >> 0x1F) == 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            return var_r0;
        }
    }
    return 0;
}
