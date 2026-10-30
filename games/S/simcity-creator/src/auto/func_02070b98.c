#include "m2c.h"

s32 func_020537ec(s32);                             /* extern */
s32 func_020538dc(s32);                             /* extern */
M2C_UNK func_02053c38(s32, s16, s32);               /* extern */
s32 func_020b155c();                                /* extern */

void func_02070b98(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    s32 temp_r4;

    M2C_FIELD((arg0 + (arg1 << 8) + (arg2 * 2)), s16 *, 0x2009C) = arg3;
    if (func_020b155c() != 0) {
        return;
    }
    temp_r4 = func_020538dc(M2C_FIELD(arg0, s32 *, 0x55118));
    func_02053c38(temp_r4, arg3, func_020537ec(M2C_FIELD(arg0, s32 *, 0x55118)));
}
