#include "m2c.h"

s32 func_020aa068();                             /* extern */
M2C_UNK func_020aa070();                    /* extern */
M2C_UNK func_020bf820();                     /* extern */
extern s32 data_0217447c;

void func_020bfaf0(void) {
    s32 var_r5;

    if ((data_0217447c == 0) || (func_020aa068() == 0)) {
        func_020bf820(0);
        return;
    }
    var_r5 = func_020aa068(data_0217447c) - 1;
    if (var_r5 < 0) {
        return;
    }
    do {
        func_020aa070(data_0217447c, var_r5);
        func_020bf820();
        var_r5 -= 1;
    } while (var_r5 >= 0);
}
