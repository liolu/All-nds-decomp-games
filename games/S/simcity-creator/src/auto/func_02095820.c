#include "m2c.h"

M2C_UNK func_02003048(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020055c4(s32, s32);                    /* extern */

void func_02095820(s32 arg0, u32 arg1) {
    s32 temp_r4;

    if (arg1 == 0) {
        return;
    }
    if (arg1 > 0x80U) {
        return;
    }
    temp_r4 = arg1 * 8;
    func_020055c4(arg0 + 0xC, temp_r4);
    func_02003048(arg0 + 0xC, 0, temp_r4);
}
