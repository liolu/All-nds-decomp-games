/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_02011124(s32, s32);                    /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021011e4;

void func_02083904(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020121b4(arg0, 0);
    temp_r0 = func_020121b4(arg0, 1);
    func_0200e8c8(&data_021011e4, temp_r5, temp_r0);
    func_02011124(temp_r5, temp_r0);
}
