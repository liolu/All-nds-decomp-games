#include "m2c.h"

s32 func_02005d14(M2C_UNK);                         /* extern */
s32 func_02005d28(M2C_UNK);                         /* extern */
s32 func_02005ef0(M2C_UNK, s32, M2C_UNK);           /* extern */
s32 func_020295e8(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_020299f4(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern s32 data_0215146c;
extern s32 data_02151474;
extern s32 data_0215147c;
extern M2C_UNK data_02151548;

void func_02024d50(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r4       = func_02005d28(0);
    temp_r4_2     = (func_02005d14(0) & ~0xF) - ((temp_r4 + 0xF) & ~0xF);
    temp_r0       = func_02005ef0(0, temp_r4_2, 0x10);
    data_0215147c = temp_r4_2;
    data_02151474 = temp_r0;
    temp_r0_2     = func_020295e8(temp_r0, temp_r4_2, 0);
    data_0215146c = temp_r0_2;
    func_020299f4(&data_02151548, temp_r0_2, 4);
}
