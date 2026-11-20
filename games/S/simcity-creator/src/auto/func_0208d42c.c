#include "m2c.h"

s32 func_0208d540(M2C_UNK, s16, s16, s16, s32, s32); /* extern */

s32 func_0208d42c(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r4;

    var_r4 = 0;
    if (arg3 == 0x1A) {
        if (func_0208d540(arg0, (s16) (arg1 - 1), (s16) (arg2 - 1), (s16) (arg1 + 1), (s32) (s16) (arg2 + 1), 0) == 0) {
            if (func_0208d540(arg0, (s16) (arg1 - 2), (s16) (arg2 - 2), (s16) (arg1 + 2), (s32) (s16) (arg2 + 2), 0) == 0) {
                var_r4 = 2;
            } else {
                var_r4 = 1;
            }
        }
    } else if ((arg3 == 0x1C) &&
               (func_0208d540(arg0, (s16) (arg1 - 1), (s16) (arg2 - 1), (s16) (arg1 + 3), (s32) (s16) (arg2 + 3), 1) == 0)) {
        var_r4 = 2;
    }
    return var_r4;
}
