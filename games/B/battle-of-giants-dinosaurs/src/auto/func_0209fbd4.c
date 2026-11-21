#include "m2c.h"

s32 func_0209f92c();                                /* extern */
s32 func_0209f940(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0209fca4(void *, s32, M2C_UNK, s32);   /* extern */

s32 func_0209fbd4(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;

    temp_r4 = func_0209f92c();
    func_0209fca4(arg0, temp_r4, 3, func_0209f940(arg0, arg2));
    return M2C_FIELD(arg0, s32 *, 4) + (temp_r4 << M2C_FIELD(arg0, s32 *, 0x14));
}
