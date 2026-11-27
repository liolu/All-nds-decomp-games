#include "m2c.h"

s32 func_020b1990(M2C_UNK *, s32, u32, s32 *);      /* extern */
M2C_UNK func_020b4538(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020b478c(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK func_020d4858(M2C_UNK, M2C_UNK *, s32);     /* extern */
extern M2C_UNK data_021d6060;
extern M2C_UNK data_021d6254;

u32 func_020b1bdc(M2C_UNK *arg0, s32 arg1, s32 *arg2) {
    u32 var_r4;
    u32 var_r8;
    u32 var_r9;

    if (arg2 != NULL) {
        *arg2 = 0;
    }
    var_r4 = 0;
    if ((arg1 == M2C_FIELD(&data_021d6060, s32 *, 0x24)) && (M2C_FIELD(&data_021d6060, s32 *, 0x20) != 0)) {
        var_r8 = 0;
    loop_5:
        if (func_020b1990(arg0, arg1, var_r8, arg2) == 1) {
            var_r4 = 1;
        } else {
            var_r8 += 1;
            if (var_r8 < 3U) {
                goto loop_5;
            }
        }
        if (var_r4 != 0) {
            var_r9 = var_r8 + 1;
            if (var_r9 == 3) {
                var_r4 = 1;
            } else if (var_r9 < 3U) {
                do {
                    if (func_020b1990(&data_021d6254, arg1, var_r9, arg2) == 1) {
                        func_020b478c(arg0, &data_021d6254, arg0, arg1);
                    }
                    var_r9 += 1;
                } while (var_r9 < 3U);
            }
        } else {
            func_020d4858(0, arg0, arg1);
        }
    } else {
        func_020d4858(0, arg0, arg1);
        var_r4 = 0;
    }
    if (M2C_FIELD(&data_021d6060, s32 *, 0x18) != 0) {
        func_020b4538(arg0, arg1);
    }
    return var_r4;
}
