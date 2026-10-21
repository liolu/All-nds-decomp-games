#include "m2c.h"

M2C_UNK func_0208a2c8(M2C_UNK, s32);                /* extern */
void *func_02090a40();                              /* extern */

s32 func_020909c0(s32 arg0) {
    void *temp_r0;

    if (arg0 != 0) {
        return 1;
    }
    if (M2C_FIELD(func_02090a40(), u8 *, 0x15) != 3) {
        temp_r0                         = func_02090a40();
        M2C_FIELD(temp_r0, u8 *, 0x17D) = (u8) (M2C_FIELD(temp_r0, u8 *, 0x17D) + 1);
    }
    if ((M2C_FIELD(func_02090a40(), u8 *, 0x15) == 3) || ((u32) M2C_FIELD(func_02090a40(), u8 *, 0x17D) >= 5U)) {
        func_0208a2c8(6, 0xFFFEAE6C);
        return 0;
    }
    return 1;
}
