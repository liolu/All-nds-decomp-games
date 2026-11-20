#include "m2c.h"

M2C_UNK func_02018198(void *);                      /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */

s32 func_020098cc(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 == 0x100) {
        temp_r4 = func_02019d04();
        if (!(M2C_FIELD(arg0, s32 *, 0xC) & 8)) {
            do {
                func_02018198(arg0 + 0x18);
            } while (!(M2C_FIELD(arg0, s32 *, 0xC) & 8));
        }
        func_02019d18(temp_r4);
        var_r1                      = M2C_FIELD(arg0, s32 *, 0x14);
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~8);
    }
    return var_r1;
}
