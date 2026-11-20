#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_02034904(s32);                             /* extern */
M2C_UNK func_0203d33c(void *);                      /* extern */
s32 func_020908b4();                                /* extern */
M2C_UNK func_020908dc();                            /* extern */

void func_0203d028(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x5C);
    if (var_r0 != 0) {
        var_r0 = func_020908b4();
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = var_r0;
    func_020908dc();
    func_0203d33c(arg0);
    M2C_FIELD(arg0, s32 *, 0x8164) = func_02034904(0x10002);
    M2C_FIELD(arg0, s32 *, 0x8168) = func_02034904(0x402);
    M2C_FIELD(arg0, s32 *, 0x816C) = func_02034904(0x1002);
}
