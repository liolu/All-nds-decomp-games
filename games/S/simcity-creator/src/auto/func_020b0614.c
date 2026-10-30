#include "m2c.h"

M2C_UNK func_0203491c();                            /* extern */
M2C_UNK func_020afd2c();                            /* extern */

void func_020b0614(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = (arg1 * 0x28) + (arg0 + 0x104);
    if (M2C_FIELD(temp_r4, s32 *, 0x20) == 0) {
        return;
    }
    func_020afd2c();
    if (M2C_FIELD(temp_r4, s32 *, 0x20) != 0) {
        func_0203491c();
    }
    M2C_FIELD(temp_r4, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r4, s16 *, 0x18) = 0;
}
