/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02016f8c();                            /* extern */
void **func_02016fe0(s32, s32);                     /* extern */
s32 func_0201af58();                                /* extern */
extern M2C_UNK data_021004fc;
extern M2C_UNK data_021013e4;

void func_02084d64(M2C_UNK arg0) {
    s32 temp_r0;
    void **temp_r0_2;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_021013e4, &data_021004fc, temp_r0);
    if (temp_r0 == -1) {
        func_0201af58();
        func_02016f8c();
        return;
    }
    temp_r0_2 = func_02016fe0(func_0201af58(), temp_r0);
    if (temp_r0_2 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 0xDC)(temp_r0_2);
}
