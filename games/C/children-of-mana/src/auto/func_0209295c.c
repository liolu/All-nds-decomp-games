#include "m2c.h"

extern M2C_UNK data_02102b8c;

u16 func_0209295c(s32 arg0, s32 arg1) {
    s32 var_r2;

    var_r2 = 0;
    if (arg0 == 5) {
        if (arg1 == 0x220) {
            var_r2 = 1;
        }
        if (arg1 == 0x228) {
            var_r2 = 2;
        }
        if (arg1 == 0x238) {
            var_r2 = 3;
        }
        if (arg1 == 0x240) {
            var_r2 = 4;
        }
    } else if (arg0 == 7) {
        if (arg1 == 0x28) {
            var_r2 = 5;
        }
        if (arg1 == 0x30) {
            var_r2 = 6;
        }
        if (arg1 == 0x50) {
            var_r2 = 7;
        }
        if (arg1 == 0x58) {
            var_r2 = 8;
        }
    }
    return *((u16 *) ((s8 *) &data_02102b8c + (var_r2 * 2)));
}
