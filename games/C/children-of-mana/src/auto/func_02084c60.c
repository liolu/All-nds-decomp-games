/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32, s32);         /* extern */
s32 *func_02010b48(s32, s32);                       /* extern */
M2C_UNK func_02012178(M2C_UNK, s32);                /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02016fe0(s32, s32);                        /* extern */
s32 func_0201af58();                                /* extern */
s32 func_0201d088();                                /* extern */
s32 func_0201e150();                                /* extern */
extern M2C_UNK data_021013b8;

void func_02084c60(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_021013b8, temp_r5, temp_r0);
    if (func_02016fe0(func_0201af58(), temp_r5) == 0) {
        return;
    }
    if (temp_r0 < 3) {
        func_02012178(arg0, (s32) *func_02010b48(func_0201e150(), temp_r0) >> 0xC);
        return;
    }
    func_02012178(arg0, func_0201d088());
}
