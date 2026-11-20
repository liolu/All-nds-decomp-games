#include "m2c.h"

M2C_UNK func_020ab4ec();                     /* extern */
extern M2C_UNK data_020e1cac;

void func_020ab48c(void) {
    s32 var_r5;

    M2C_FIELD(&data_020e1cac, s32 *, 4)    = -1;
    M2C_FIELD(&data_020e1cac, s32 *, 8)    = -1;
    M2C_FIELD(&data_020e1cac, s32 *, 0xC)  = 0x6C078965;
    M2C_FIELD(&data_020e1cac, s32 *, 0x10) = 0x5D588B65;
    M2C_FIELD(&data_020e1cac, s32 *, 0x14) = 0x269EC3;
    var_r5                                 = 0;
    M2C_FIELD(&data_020e1cac, s32 *, 0x18) = 0;
    do {
        func_020ab4ec(-1);
        func_020ab4ec();
        var_r5 += 1;
    } while (var_r5 < 0xA);
}
