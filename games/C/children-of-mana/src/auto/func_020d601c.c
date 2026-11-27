/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d5bf4(void *, M2C_UNK);             /* extern */

void func_020d601c(void *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    func_020d5bf4(arg0, 0xA);
    M2C_FIELD(arg0, u8 *, 0x58)  = arg4;
    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
    M2C_FIELD(arg0, s32 *, 0x64) = arg3;
}
