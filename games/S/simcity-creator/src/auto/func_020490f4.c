#include "m2c.h"

s32 func_020348ec(M2C_UNK);                         /* extern */
s32 func_02034904(s32);                             /* extern */
M2C_UNK func_02049854(void *);                      /* extern */
s32 func_020908b4();                                /* extern */
M2C_UNK func_020908dc();                            /* extern */

void func_020490f4(void *arg0) {
    s32 var_r0;

    var_r0 = func_020348ec(0x5C);
    if (var_r0 != 0) {
        var_r0 = func_020908b4();
    }
    M2C_FIELD(arg0, s32 *, 0xB44) = var_r0;
    func_020908dc();
    func_02049854(arg0);
    M2C_FIELD(arg0, s32 *, 0xAD0) = func_02034904(0x20002);
    M2C_FIELD(arg0, s32 *, 0xAD4) = func_02034904(0x402);
    M2C_FIELD(arg0, s32 *, 0xAD8) = func_02034904(0x1002);
}
