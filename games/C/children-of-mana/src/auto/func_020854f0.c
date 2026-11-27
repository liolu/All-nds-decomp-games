/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, s32);              /* extern */
s32 func_020121b4(void *, M2C_UNK);                 /* extern */
extern M2C_UNK data_02101514;

void func_020854f0(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02101514, temp_r0);
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0x10;
    M2C_FIELD(arg0, s32 *, 0x338) = temp_r0;
}
