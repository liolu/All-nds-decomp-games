/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32, s32);         /* extern */
s32 func_020121b4(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0207c1b0(s32, s32);                    /* extern */
M2C_UNK func_02087eec(s32, s32);                    /* extern */
s32 func_020ae36c(s32);                             /* extern */
extern M2C_UNK data_02101c14;

void func_02087d3c(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_02101c14, temp_r5, temp_r0);
    func_02087eec(temp_r5, temp_r0);
    if (func_020ae36c(M2C_FIELD(arg0, s32 *, 0x300)) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x33C) == 1) {
        return;
    }
    func_0207c1b0(temp_r5, temp_r0);
}
