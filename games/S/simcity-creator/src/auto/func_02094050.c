#include "m2c.h"

s32 func_02053814();                                /* extern */
M2C_UNK func_0206fff0(s32);                         /* extern */
M2C_UNK func_020af540(s32, s8, M2C_UNK, u16);       /* extern */
s32 func_020af594();                                /* extern */

void func_02094050(void *arg0, s32 arg1, s8 arg2, s8 arg3) {
    if (arg1 == 0) {
        return;
    }
    func_0206fff0(M2C_FIELD(arg0, s32 *, 0x6C));
    func_02053814();
    if (func_020af594() == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10)  = arg1;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s8 *, 0x11C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x119)  = arg2;
    M2C_FIELD(arg0, s8 *, 0x11A)  = arg3;
    func_0206fff0(M2C_FIELD(arg0, s32 *, 0x6C));
    func_020af540(func_02053814(), arg2, -0x10, (u16) arg3);
    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
}
