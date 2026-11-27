/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32);              /* extern */
s32 func_020121b4(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0207c0ec(s8);                          /* extern */
M2C_UNK func_02087e00(s32);                         /* extern */
s32 func_020ae36c(s32);                             /* extern */
extern M2C_UNK data_02100f74;
extern s8 data_021266a4;

void func_02082f2c(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02100f74, temp_r0);
    func_02087e00(temp_r0);
    if (func_020ae36c(M2C_FIELD(arg0, s32 *, 0x300)) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x33C) == 1) {
        return;
    }
    func_0207c0ec(data_021266a4);
}
