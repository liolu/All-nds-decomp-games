#include "m2c.h"

void func_020618f0(s32 arg0, s32 arg1) {
    s32 var_r2;
    s32 var_r3;

    var_r3 = 1;
    if (arg0 == 0) {
        var_r3 = 0;
    }
    *(s32 *) 0x040004C0 = 0x42107FFF | (var_r3 << 0xF);
    var_r2              = 1;
    if (arg1 == 0) {
        var_r2 = 0;
    }
    *(s32 *) 0x040004C4 = 0x4210 | (var_r2 << 0xF);
}
