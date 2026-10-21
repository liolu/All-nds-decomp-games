#include "m2c.h"

M2C_UNK func_02098a0c();                            /* extern */
M2C_UNK func_02098a38(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02098a98();                            /* extern */
M2C_UNK func_02098acc();                            /* extern */
s32 func_02099a18();                                /* extern */
s32 func_02099be4(s32, s32);                        /* extern */

s32 func_02099f34(void) {
    s32 temp_r0;
    s32 var_r5;

    func_02098a98();
    func_02098a0c();
    func_02098a38(0x44, 0x43, -1);
    var_r5 = 0;
loop_1:
    temp_r0 = func_02099be4(func_02099a18(), var_r5);
    if (temp_r0 != 1) {
        var_r5 += 1;
        if (var_r5 < 4) {
            goto loop_1;
        }
    }
    func_02098acc();
    if (temp_r0 == 1) {
        return 1;
    }
    return 0;
}
