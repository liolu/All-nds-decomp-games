#include "m2c.h"

s32 func_02053814();                                /* extern */
M2C_UNK func_0206fff0(s32);                         /* extern */
M2C_UNK func_020af540(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02093ff8(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10)  = arg1;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s8 *, 0x11C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x119)  = 2;
    M2C_FIELD(arg0, s8 *, 0x11A)  = 1;
    func_0206fff0(M2C_FIELD(arg0, s32 *, 0x6C));
    func_020af540(func_02053814(), 2, -0x10, 1);
    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
}
