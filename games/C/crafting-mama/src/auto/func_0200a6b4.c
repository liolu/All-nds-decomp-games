#include "m2c.h"

M2C_UNK func_02018198(void *);                      /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */

s32 func_0200a6b4(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r7;
    s32 var_r0;
    s32 var_r5;

    temp_r4 = func_02019d04();
    if (M2C_FIELD(arg0, volatile s32 *, 0x14) & 8) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    var_r5 = 1;
    if (var_r0 != 0) {
        var_r5 = 0;
    }
    if (var_r5 != 0) {
        temp_r0 = M2C_FIELD(arg0, volatile s32 *, 0x14);
        if (!(temp_r0 & 0x10)) {
            M2C_FIELD(arg0, volatile s32 *, 0x14) = (s32) (temp_r0 | 8);
        } else {
            M2C_FIELD(arg0, volatile s32 *, 0x14) = (s32) (temp_r0 | 0x40);
            temp_r7                               = func_02019d04();
            if (M2C_FIELD(arg0, volatile s32 *, 0x14) & 0x40) {
                do {
                    func_02018198(arg0 + 0xC);
                } while (M2C_FIELD(arg0, volatile s32 *, 0x14) & 0x40);
            }
            func_02019d18(temp_r7);
        }
    }
    func_02019d18(temp_r4);
    return var_r5;
}
