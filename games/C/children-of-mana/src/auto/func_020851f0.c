/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32, s32);         /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02016fe0(s32, s32);                        /* extern */
s32 func_0201af58();                                /* extern */
M2C_UNK func_0201cb88(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02101484;

void func_020851f0(M2C_UNK arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;

    temp_r5 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_02101484, temp_r5, temp_r0);
    temp_r0_2 = func_02016fe0(func_0201af58(), temp_r5);
    if (temp_r0_2 == 0) {
        return;
    }
    if (temp_r0 == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_0201cb88(temp_r0_2, var_r1);
}
