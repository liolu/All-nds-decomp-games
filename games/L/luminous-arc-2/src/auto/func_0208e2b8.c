#include "m2c.h"

s32 func_0208b6ec(M2C_UNK, s32, s32, u16, s32 *, s32); /* extern */
void *func_02090a40();                              /* extern */

s32 func_0208e2b8(void) {
    s32 sp8;
    s32 var_r4;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r6;
    void *temp_r7;

    var_r4 = 0;
    sp8    = 0;
    if ((M2C_FIELD(func_02090a40(), u8 *, 0x17) != 0) && (M2C_FIELD(func_02090a40(), s32 *, 0x20) != 0)) {
        temp_r5 = func_02090a40();
        if (M2C_FIELD(temp_r5, s32 *, 0x20) != M2C_FIELD(func_02090a40(), s32 *, 0x200)) {
            temp_r7   = func_02090a40();
            temp_r5_2 = func_02090a40();
            temp_r6   = func_02090a40();
            temp_r4   = func_02090a40();
            var_r4 =
                func_0208b6ec(0xC, M2C_FIELD(temp_r7, s32 *, 0x20),
                              M2C_FIELD((temp_r5_2 + ((M2C_FIELD(temp_r6, u8 *, 0xD) + 1) * 4)), s32 *, 0x24),
                              M2C_FIELD((temp_r4 + ((M2C_FIELD(func_02090a40(), u8 *, 0xD) + 1) * 2)), u16 *, 0xA4), &sp8, 1);
            M2C_FIELD(func_02090a40(), s8 *, 0x17)  = 0;
            M2C_FIELD(func_02090a40(), s32 *, 0x20) = 0;
        }
    }
    return var_r4;
}
