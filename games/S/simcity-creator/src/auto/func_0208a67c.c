#include "m2c.h"

s32 func_0207039c(s32);                             /* extern */
s32 func_02070818(s32, M2C_UNK, M2C_UNK);           /* extern */
u32 func_02070914(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_02070b84(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_0208a67c(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u32 temp_r0;

    if (func_0207039c(*arg0) != 0) {
        return 0;
    }
    temp_r0 = func_02070914(*arg0, arg1, arg2);
    if (temp_r0 != 0) {
        if ((temp_r0 >= 0x1BU) && (temp_r0 <= 0x1DU)) {
            return 1;
        }
        return 2;
    }
    if (func_02070818(*arg0, arg1, arg2) != 0) {
        return 2;
    }
    if (func_02070b84(*arg0, arg1, arg2) != 0) {
        return 2;
    }
    return 0;
}
