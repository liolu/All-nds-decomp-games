/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_020cc370;

s32 func_020578e0(s32 arg0) {
    s32 var_r3;
    s32 var_r3_2;
    void *temp_r1;
    void *temp_r1_2;

    if (arg0 == 0) {
        return 0;
    }
    var_r3_2 = 0;
loop_3:
    temp_r1 = M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020cc370 + (var_r3_2 * 4))), void **, 4);
    if ((temp_r1 != NULL) && (arg0 == M2C_FIELD(temp_r1, u16 *, 0x28))) {
        return var_r3_2 + 0x80;
    }
    var_r3_2 += 1;
    if (var_r3_2 >= 3) {
        var_r3 = 0;
    loop_8:
        temp_r1_2 = M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020cc370 + (var_r3 * 4))), void **, 0x10);
        if ((temp_r1_2 != NULL) && (arg0 == M2C_FIELD(temp_r1_2, u16 *, 0x28))) {
            return var_r3 + 0x40;
        }
        var_r3 += 1;
        if (var_r3 >= 5) {
            return 0;
        }
        goto loop_8;
    }
    goto loop_3;
}
