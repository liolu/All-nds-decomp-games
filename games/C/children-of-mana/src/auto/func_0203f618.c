/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f21c(s32, M2C_UNK);                    /* extern */
s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
void *func_0203d1b0();                              /* extern */
M2C_UNK func_0204917c();                            /* extern */
M2C_UNK func_02073888(s32, M2C_UNK, s32, s32, s32); /* extern */
s32 func_020738f4(M2C_UNK);                         /* extern */
M2C_UNK func_02073a8c(s32, s32, s32, M2C_UNK);      /* extern */
s32 func_02073ae8(M2C_UNK);                         /* extern */
s32 func_0207b79c(s32, M2C_UNK);                    /* extern */
extern s32 data_02117564;
extern s32 data_02117568;
extern s32 data_0211756c;

void func_0203f618(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;

    temp_r0       = func_020738f4(0x80);
    data_02117568 = func_0200f21c(temp_r0, 0);
    func_02073888(M2C_FIELD(func_0203d1b0(), s32 *, 0x20), 0, data_02117568, temp_r0, 1);
    temp_r0_2     = func_02073ae8(0x80);
    data_02117564 = func_0200f21c(temp_r0_2, 0);
    func_02073a8c(M2C_FIELD(func_0203d1b0(), s32 *, 0x24), data_02117564, temp_r0_2, 1);
    var_r0 = func_0200f270(0xC, 0);
    if (var_r0 != 0) {
        var_r0 = func_0207b79c(var_r0, 0x80);
    }
    data_0211756c = var_r0;
    func_0204917c();
}
