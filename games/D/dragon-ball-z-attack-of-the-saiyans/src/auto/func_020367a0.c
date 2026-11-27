/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern s32 data_020d6380;
extern M2C_UNK data_020d6384;

void func_020367a0(void) {
    s32 var_r2;

    var_r2 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_020d6384 + (var_r2 * 4))) = 0;
        var_r2 += 1;
    } while (var_r2 < 8);
    data_020d6380 = 0;
}
