#include "m2c.h"

s32 func_02063b14();                    /* extern */
M2C_UNK func_02063b24();       /* extern */
M2C_UNK func_02063b3c();       /* extern */
s32 func_ov001_02109968();                   /* extern */
s32 func_ov001_02109bbc();              /* extern */

void func_02063cf8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r4;
    s32 var_r4_2;

    var_r4 = 0;
loop_1:
    if (func_ov001_02109bbc(arg1, func_02063b14(arg0, var_r4)) != 0) {
        return;
    }
    var_r4 += 1;
    if (var_r4 >= 0x40) {
        var_r4_2 = 0;
    loop_5:
        if (func_ov001_02109968(arg1) != 0) {
            func_02063b14(arg0, var_r4_2);
            if (func_ov001_02109968() == 0) {
                func_02063b24(arg0, var_r4_2, arg1);
                func_02063b3c(arg0, arg2, var_r4_2);
                return;
            }
        }
        var_r4_2 += 1;
        if (var_r4_2 >= 0x40) {
            return;
        }
        goto loop_5;
    }
    goto loop_1;
}
