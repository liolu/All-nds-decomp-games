#include "m2c.h"

u32 func_02070818(s32, M2C_UNK, M2C_UNK);           /* extern */
u32 func_02070914(s32);                             /* extern */

s32 func_0207f3e4(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u32 temp_r0;
    u32 temp_r0_2;

    temp_r0 = func_02070914(*arg0);
    if (temp_r0 != 0) {
        if (temp_r0 == 0x1E) {
            return 1;
        }
        if (temp_r0 == 0x1F) {
            return 3;
        }
        if ((temp_r0 >= 0x20U) && (temp_r0 <= 0x21U)) {
            return 2;
        }
        return 5;
    }
    temp_r0_2 = func_02070818(*arg0, arg1, arg2);
    if (temp_r0_2 != 0) {
        if ((temp_r0_2 >= 0x52U) && (temp_r0_2 <= 0x54U)) {
            return 4;
        }
        return 5;
    }
    return 0;
}
