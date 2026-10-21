#include "m2c.h"

extern s32 data_0212d988;

void func_020aae5c(s32 arg0) {
    s32 var_r1;

    if (arg0 != 0) {
        var_r1 = arg0 & ~0x80000000;
    } else {
        var_r1 = 1;
    }
    data_0212d988 = var_r1;
}
