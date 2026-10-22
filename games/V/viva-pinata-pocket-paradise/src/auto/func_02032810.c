#include "m2c.h"

M2C_UNK func_02031c78(s32, s32, s32);               /* extern */
extern s32 data_027e0194;
extern s32 data_027e0198;
extern s32 data_027e019c;
extern s32 data_027e0238;

void func_02032810(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp4;
    s32 sp0;
    s32 var_r10;
    s32 var_r7;

    var_r10 = arg0;
    sp4     = arg2;
    sp0     = arg1;
    if (var_r10 > arg2) {
        return;
    }
    do {
        var_r7 = sp0;
        if (var_r7 <= arg3) {
            do {
                if ((var_r10 >= (s32) data_027e0198) && (var_r7 >= (s32) data_027e0194)) {
                    if ((var_r10 < (s32) data_027e019c) && (var_r7 < (s32) data_027e0238)) {
                        func_02031c78(var_r10, var_r7, arg4);
                    }
                }
                var_r7 += 1;
            } while (var_r7 <= arg3);
        }
        var_r10 += 1;
    } while (var_r10 <= sp4);
}
