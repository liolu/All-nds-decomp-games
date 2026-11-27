/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32, s32, s32);    /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02035ffc(s32, s32, M2C_UNK, s32);      /* extern */
extern M2C_UNK data_02101630;

void func_02085c88(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = func_020121b4(arg0, 0);
    temp_r5 = func_020121b4(arg0, 1);
    temp_r0 = func_020121b4(arg0, 2);
    func_0200e8c8(&data_02101630, temp_r6, temp_r5, temp_r0);
    func_02035ffc(temp_r6, temp_r5, 3, temp_r0);
}
