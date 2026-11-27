/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02044d6c(s32, s32);                    /* extern */
extern M2C_UNK data_020cc370;

s32 func_02048e38(M2C_UNK arg0) {
    s32 temp_r5;
    s32 var_r6;
    s32 var_r6_2;

    temp_r5 = func_02012a90(arg0, 1);
    var_r6  = 0;
    do {
        func_02044d6c(M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020cc370 + (var_r6 * 4))), s32 *, 4), temp_r5);
        var_r6 += 1;
    } while (var_r6 < 3);
    var_r6_2 = 0;
    do {
        func_02044d6c(M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020cc370 + (var_r6_2 * 4))), s32 *, 0x10), temp_r5);
        var_r6_2 += 1;
    } while (var_r6_2 < 5);
    return 1;
}
