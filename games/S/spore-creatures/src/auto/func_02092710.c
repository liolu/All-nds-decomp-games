#include "m2c.h"

extern M2C_UNK data_020e749c;

void func_02092710(s32 arg0, u8 *arg1, s32 arg2) {
    u8 *var_r1;
    u8 *var_r2;

    var_r1 = arg1;
    var_r2 = (M2C_UNK *) ((s8 *) &data_020e749c + (arg2 << 6));
    if ((var_r1 != NULL) && (*var_r1 != 0)) {
        do {
            *var_r2 = *var_r1;
            var_r2 += 1;
            var_r1 += 1;
        } while (*var_r1 != 0);
    }
    *var_r2 = 0;
}
