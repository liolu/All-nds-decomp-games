/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32, s32);         /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02016fe0(s32, s32);                        /* extern */
s32 func_0201af58();                                /* extern */
M2C_UNK func_0201c4dc(s32);                         /* extern */
M2C_UNK func_0201c4ec(s32);                         /* extern */
M2C_UNK func_0201c518();                            /* extern */
M2C_UNK func_0201c528();                            /* extern */
extern M2C_UNK data_021014a0;

void func_02085264(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;

    temp_r4 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_021014a0, temp_r4, temp_r0);
    temp_r0_2 = func_02016fe0(func_0201af58(), temp_r4);
    if (temp_r0_2 == 0) {
        return;
    }
    if (temp_r0 != 0) {
        func_0201c528();
        func_0201c4ec(temp_r0_2);
        return;
    }
    func_0201c518();
    func_0201c4dc(temp_r0_2);
}
