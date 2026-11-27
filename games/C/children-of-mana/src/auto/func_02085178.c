/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32, s32, s32);    /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02016fe0(s32, s32);                        /* extern */
s32 func_0201af58();                                /* extern */
M2C_UNK func_0201c804(s32, s32, s32);               /* extern */
extern M2C_UNK data_02101468;

void func_02085178(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = func_020121b4(arg0, 0);
    temp_r5 = func_020121b4(arg0, 1);
    temp_r0 = func_020121b4(arg0, 2);
    func_0200e8c8(&data_02101468, temp_r6, temp_r5, temp_r0);
    temp_r0_2 = func_02016fe0(func_0201af58(), temp_r6);
    if (temp_r0_2 == 0) {
        return;
    }
    func_0201c804(temp_r0_2, temp_r5, temp_r0);
}
