/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern M2C_UNK data_021266e0;
extern M2C_UNK data_021268e0;

void func_02087eec(s32 arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;

    if (arg0 == -1) {
        var_r1 = 0;
        if (arg1 != 0) {
            var_r2 = 1;
        } else {
            var_r2 = 0;
        }
        do {
            *((u32 *) ((s8 *) &data_021268e0 + (var_r1 * 4))) = var_r2;
            var_r1 += 1;
        } while (var_r1 < 0x80);
        var_r1_2 = 0;
        do {
            *((u32 *) ((s8 *) &data_021266e0 + (var_r1_2 * 4))) = var_r2;
            var_r1_2 += 1;
        } while (var_r1_2 < 0x20);
        return;
    }
    if (arg0 < 0x80) {
        if (arg1 != 0) {
            var_r2_2 = 1;
        } else {
            var_r2_2 = 0;
        }
        *((u32 *) ((s8 *) &data_021268e0 + (arg0 * 4))) = var_r2_2;
        return;
    }
    if (arg1 != 0) {
        var_r2_3 = 1;
    } else {
        var_r2_3 = 0;
    }
    *((u32 *) ((s8 *) &data_021266e0 + ((arg0 - 0x20) * 4))) = var_r2_3;
}
