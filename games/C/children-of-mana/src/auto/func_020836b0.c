/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020112ac(s32);                         /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_02101148;

void func_020836b0(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02101148, temp_r0);
    func_020112ac(temp_r0);
}
