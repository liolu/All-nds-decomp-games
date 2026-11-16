/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_020315bc(s32);                         /* extern */
extern M2C_UNK data_020aa4a0;

void func_020397d8(void) {
    s32 var_r6;

    var_r6 = 0;
    do {
        func_020315bc((var_r6 * 0x7C) + (s32) &data_020aa4a0);
        var_r6 += 1;
    } while (var_r6 < 2);
}
