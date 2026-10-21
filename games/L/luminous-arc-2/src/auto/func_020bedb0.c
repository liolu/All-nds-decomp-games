#include "m2c.h"

s32 func_020aa068(s32);                             /* extern */
s32 func_020aa070(s32, s32);                        /* extern */
M2C_UNK func_020aa18c(s32, s32);                    /* extern */
extern s32 data_0217447c;

void func_020bedb0(s32 arg0) {
    s32 var_r5;

    var_r5 = 0;
    if (func_020aa068(data_0217447c) <= 0) {
        return;
    }
loop_3:
    if (arg0 == func_020aa070(data_0217447c, var_r5)) {
        func_020aa18c(data_0217447c, var_r5);
        return;
    }
    var_r5 += 1;
    if (var_r5 >= func_020aa068(data_0217447c)) {
        return;
    }
    goto loop_3;
}
