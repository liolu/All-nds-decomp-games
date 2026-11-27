/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c3184(void *);                          /* extern */
M2C_UNK func_020c32a8(void *);                      /* extern */
M2C_UNK func_020c33a0(void *, s32);                 /* extern */

void func_020be228(void *arg0) {
    s32 var_r5;
    void *var_r4;

    if (M2C_FIELD(arg0, u8 *, 0xC) == 0) {
        return;
    }
    var_r4 = arg0 + 0x1A4;
    var_r5 = 0;
    do {
        if ((M2C_FIELD(var_r4, s16 *, 0x10) == 0) && (M2C_FIELD(var_r4, s16 *, 0xE) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x50) = func_020c3184(var_r4);
        }
        func_020c32a8(var_r4);
        var_r5 += 1;
        var_r4 += 0x14;
    } while (var_r5 < 2);
    if (M2C_FIELD(arg0, u8 *, 0xD8) != 0) {
        return;
    }
    func_020c33a0(arg0 + 0x17C, M2C_FIELD(arg0, s32 *, 0xD0));
}
