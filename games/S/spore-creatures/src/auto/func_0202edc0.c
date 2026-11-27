#include "m2c.h"

M2C_UNK func_0203eb7c(s32);                         /* extern */

void func_0202edc0(void *arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0 + 0x20;
    var_r4 = 0;
    do {
        func_0203eb7c(var_r5);
        var_r4 += 1;
        var_r5 += 0xE8;
    } while (var_r4 < 0x24);
    M2C_FIELD(arg0, s8 *, 0x20C0) = 0;
}
