#include "m2c.h"

s8 func_02012a90(M2C_UNK, M2C_UNK);                 /* extern */
s8 func_02012b7c(M2C_UNK, M2C_UNK, s8);             /* extern */
M2C_UNK func_0202bd94(s32, s8);                     /* extern */
void *func_02053a7c(s8);                            /* extern */
s32 func_02053d3c(s8);                              /* extern */
M2C_UNK func_02055a38(s8, M2C_UNK);                 /* extern */
extern M2C_UNK data_020cc620;

s32 func_0204e268(M2C_UNK arg0) {
    s8 temp_r0;
    s8 temp_r5;
    s8 temp_r7;
    s8 temp_r8;
    void *temp_r0_2;

    temp_r8 = func_02012a90(arg0, 1);
    temp_r7 = func_02012a90(arg0, 2);
    temp_r0 = func_02012a90(arg0, 3);
    temp_r5 = func_02012b7c(arg0, 4, temp_r0);
    if (func_02053d3c(temp_r8) == 0) {
        return 0;
    }
    temp_r0_2 = func_02053a7c(temp_r8);
    func_0202bd94(temp_r0_2 + 0x38, temp_r0);
    M2C_FIELD(temp_r0_2, s8 *, 0x30) = temp_r7;
    M2C_FIELD(temp_r0_2, s8 *, 0x31) = temp_r5;
    M2C_FIELD(temp_r0_2, s8 *, 0x32) = 0;
    func_02055a38(temp_r8, 0xC);
    M2C_FIELD(temp_r0_2, u8 *, 0x33) = (u8) M2C_FIELD(&data_020cc620, u8 *, 0xB42);
    return 1;
}
