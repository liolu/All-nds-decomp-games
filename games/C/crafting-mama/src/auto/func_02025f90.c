#include "m2c.h"

u32 func_02018fac();                                /* extern */
extern M2C_UNK func_01ff8000;

s32 func_02025f90(u32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 var_r0;
    s32 var_r2;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;

    var_r4 = 0;
    var_r5 = 0;
    var_r2 = 0;
    if ((arg0 <= 3U) && (arg3 != 0) && !(arg1 & 0x1F)) {
        var_r0 = 1;
        if (((u32) (arg1 + arg3) > (u32) &func_01ff8000) && (arg1 < 0x02000000U)) {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            var_r2 = 1;
        }
    }
    if (var_r2 != 0) {
        var_r6 = 1;
        if (((u32) (arg1 + arg3) > func_02018fac()) && (arg1 < (u32) (func_02018fac() + 0x4000))) {
            var_r6 = 0;
        }
        if (var_r6 != 0) {
            var_r5 = 1;
        }
    }
    if ((var_r5 != 0) && !((arg2 | arg3) & 0x1FF)) {
        var_r4 = 1;
    }
    return var_r4;
}
