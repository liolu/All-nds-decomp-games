/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02012178(M2C_UNK, s32);                /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02087f7c(s32);                             /* extern */
extern M2C_UNK data_02101c2c;

void func_02087db8(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02101c2c, temp_r0);
    func_02012178(arg0, func_02087f7c(temp_r0));
}
