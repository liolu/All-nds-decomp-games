/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
void **func_02016fe0(s32, s32);                     /* extern */
s32 func_0201af58();                                /* extern */
extern M2C_UNK data_0210052c;
extern M2C_UNK data_021013f4;

void func_02084dd4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;
    void **temp_r0_2;

    temp_r5 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_021013f4, &data_0210052c, temp_r0);
    temp_r0_2 = func_02016fe0(func_0201af58(), temp_r5);
    if (temp_r0_2 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, s32), 0x2F0)(temp_r0_2, temp_r0);
}
