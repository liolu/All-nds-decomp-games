/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK func_02011048(s32, s32, s32, s32, s32);     /* extern */
s32 func_02011204(s32);                             /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02016fe0(s32, s32);                        /* extern */
s32 func_0201af58();                                /* extern */
s32 *func_0201e150(s32);                            /* extern */
M2C_UNK func_02045554(s32, s32);                    /* extern */
extern M2C_UNK data_0210119c;

void func_02083798(M2C_UNK arg0) {
    s32 *temp_r4_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r7;
    s32 temp_r8;

    temp_r8 = func_020121b4(arg0, 0);
    temp_r7 = func_020121b4(arg0, 1);
    temp_r4 = func_020121b4(arg0, 2);
    temp_r0 = func_020121b4(arg0, 3);
    func_0200e8c8(&data_0210119c, temp_r8, temp_r7, temp_r4, temp_r0);
    temp_r0_2 = func_02016fe0(func_0201af58(), temp_r4);
    if (temp_r0_2 == 0) {
        return;
    }
    func_02045554(temp_r0_2, func_02011204(temp_r7));
    temp_r4_2 = func_0201e150(temp_r0_2);
    func_02011048(temp_r8, temp_r7, *temp_r4_2, M2C_FIELD(func_0201e150(temp_r0_2), s32 *, 4), temp_r0);
}
