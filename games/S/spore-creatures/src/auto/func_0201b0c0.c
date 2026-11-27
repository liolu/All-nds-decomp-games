#include "m2c.h"

M2C_UNK func_0201a528();                            /* extern */
M2C_UNK func_0201b740(void *);                      /* extern */
M2C_UNK func_0201c870(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_020674ec(s32, M2C_UNK);                /* extern */

void func_0201b0c0(void *arg0) {
    s32 var_r0;
    s32 var_r1;

    func_0201a528();
    M2C_FIELD(arg0, s16 *, 0x11C) = 1;
    var_r1                        = M2C_FIELD(arg0, s32 *, 4);
    var_r0                        = var_r1;
    if (var_r1 != 0) {
        var_r0 = var_r1 - 4;
    }
    if (var_r0 != 0) {
        if (var_r1 != 0) {
            var_r1 -= 4;
        }
        func_0201c870(arg0 + 0x24, var_r1, 2);
    }
    func_0201b740(arg0 + 0x34);
    M2C_FIELD(arg0, s8 *, 0x30) = 3;
    M2C_FIELD(arg0, s8 *, 0x31) = 0;
    M2C_FIELD(arg0, s8 *, 0x32) = 0;
    M2C_FIELD(arg0, s8 *, 0x33) = 0;
    func_020674ec(M2C_FIELD(arg0, s32 *, 0x120), 0x14);
    M2C_FIELD(arg0, s8 *, 0x124) = 0;
}
