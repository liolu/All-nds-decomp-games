#include "m2c.h"

M2C_UNK func_020d2cd4();                            /* extern */
s32 func_020d351c();                                /* extern */
M2C_UNK func_020d3bcc(M2C_UNK, s32);                /* extern */

void func_02079a6c(void *arg0) {
    s32 var_r1;
    u8 var_r5;

    var_r1 = 0;
    var_r5 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x76C) == 1) {
        var_r1 = 1;
        var_r5 = M2C_FIELD(arg0, u8 *, 0x76D);
    }
    if (var_r1 != 0) {
        if (func_020d351c() == 2) {
            func_020d2cd4();
            return;
        }
        if (func_020d351c() != 1) {
            return;
        }
        func_020d3bcc(5, (var_r5 * 0xC0) + (s32) (arg0 + 0x18));
        M2C_FIELD(arg0, s8 *, 0x77A) = 4;
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) | 2);
}
