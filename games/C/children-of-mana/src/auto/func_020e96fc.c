/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern M2C_UNK data_021311c0;
extern M2C_UNK data_021311f4;

void func_020e96fc(void) {
    s32 var_r3;

    var_r3 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_021311c0 + (var_r3 * 4))) = 0;
        *((M2C_UNK *) ((s8 *) &data_021311f4 + (var_r3 * 4))) = 0;
        var_r3 += 1;
    } while (var_r3 < 0xD);
}
