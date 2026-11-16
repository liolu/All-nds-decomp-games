/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

s32 func_02031700(s32);                             /* extern */
extern M2C_UNK data_020a7f5c;

s32 func_0202f4d4(void) {
    s32 var_r6;

    var_r6 = 0;
loop_1:
    if (func_02031700((var_r6 * 0x7C) + (s32) &data_020a7f5c) == 1) {
        return 1;
    }
    var_r6 += 1;
    if (var_r6 >= 0x16) {
        return 0;
    }
    goto loop_1;
}
