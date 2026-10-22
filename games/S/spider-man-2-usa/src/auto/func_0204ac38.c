/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204aca4(s32 *, void *, s32);          /* extern */

void func_0204ac38(void *arg0, s32 arg1) {
    s32 sp0;

    M2C_FIELD(arg0, s32 *, 0) = 3;
    sp0                       = 0;
    func_0204aca4(&sp0, arg0 + 4, 0x0500000C);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 0x50);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 8;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
}
