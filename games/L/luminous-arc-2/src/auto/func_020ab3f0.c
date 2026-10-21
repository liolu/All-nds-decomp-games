#include "m2c.h"

M2C_UNK func_02004978(s8 *, M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_02018e4c(M2C_UNK *, M2C_UNK, s32);     /* extern */
s32 func_0201b47c(M2C_UNK);                         /* extern */
M2C_UNK func_0201b498(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_020aa888(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020aadb4();                            /* extern */
s32 func_020ab32c(s8 *, s32, M2C_UNK *);            /* extern */
M2C_UNK func_020ab3a0();                            /* extern */
extern M2C_UNK data_0212da04;
extern M2C_UNK data_02173ca8;
extern s8 data_02173ce8;
extern M2C_UNK data_02173d28;
extern M2C_UNK data_02173d2c;
extern M2C_UNK data_02173d39;

void func_020ab3f0(M2C_UNK arg0) {
    u8 sp0[64];
    s32 temp_r0;
    s32 temp_r0_2;
    s8 *var_r0;
    s8 temp_r5;

    func_0201b498(&data_02173ca8, arg0);
    M2C_FIELD(&data_02173d28, s32 *, 0) = -1;
    func_020aadb4();
    temp_r5 = data_02173ce8;
    if (temp_r5 == 0) {
        func_02004978(sp0, &data_0212da04, arg0);
    }
    if (temp_r5 != 0) {
        var_r0 = &data_02173ce8;
    } else {
        var_r0 = sp0;
    }
    if (func_020ab32c(var_r0, 0x6CFC, &data_02173d2c) == 0) {
        return;
    }
    temp_r0                             = func_020aa888(2, 2, 0);
    M2C_FIELD(&data_02173d28, s32 *, 0) = temp_r0;
    if (temp_r0 == -1) {
        return;
    }
    M2C_FIELD(&data_02173d28, s8 *, 0xC) = 9;
    temp_r0_2                            = func_0201b47c(arg0);
    func_02018e4c(&data_02173d39, arg0, temp_r0_2 + 1);
    M2C_FIELD(&data_02173d28, s32 *, 0x4C) = (s32) (temp_r0_2 + 6);
    func_020ab3a0();
    M2C_FIELD(&data_02173d28, s32 *, 0x54) = 0;
}
