/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern M2C_UNK data_02126760;
extern M2C_UNK data_021267e0;

void func_02087e4c(s32 arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r2;
    s32 var_r2_2;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    if (var_r1 > 0x98967F) {
        var_r1 = 0x98967F;
    }
    if (arg0 == -1) {
        var_r2 = 0;
        do {
            *((M2C_UNK *) ((s8 *) &data_021267e0 + (var_r2 * 4))) = var_r1;
            var_r2 += 1;
        } while (var_r2 < 0x40);
        var_r2_2 = 0;
        do {
            *((M2C_UNK *) ((s8 *) &data_02126760 + (var_r2_2 * 4))) = var_r1;
            var_r2_2 += 1;
        } while (var_r2_2 < 0x20);
        return;
    }
    if (arg0 < 0x40) {
        *((M2C_UNK *) ((s8 *) &data_021267e0 + (arg0 * 4))) = var_r1;
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_02126760 + ((arg0 - 0x40) * 4))) = var_r1;
}
