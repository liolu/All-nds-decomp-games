#include "m2c.h"

M2C_UNK func_0206c298(void *, M2C_UNK, s32);        /* extern */
s32 func_020b132c();                                /* extern */

s32 func_0206c334(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u8 *, 0x28) < 9U) {
        func_0206c298(arg0, 0, func_020b132c() - 1);
    }
    return 1;
}
