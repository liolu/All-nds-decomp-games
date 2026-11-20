#include "m2c.h"

M2C_UNK func_020ab4ec();                            /* extern */
M2C_UNK func_020ab50c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020e1cac;
extern M2C_UNK data_020e1cb0;

void func_020ab554(s32 arg0, s32 arg1) {
    s32 var_r6;

    M2C_FIELD(&data_020e1cac, s32 *, 4)    = arg0;
    M2C_FIELD(&data_020e1cac, s32 *, 8)    = arg1;
    M2C_FIELD(&data_020e1cac, s32 *, 0xC)  = 0x6C078965;
    M2C_FIELD(&data_020e1cac, s32 *, 0x10) = 0x5D588B65;
    M2C_FIELD(&data_020e1cac, s32 *, 0x14) = 0x269EC3;
    var_r6                                 = 0;
    M2C_FIELD(&data_020e1cac, s32 *, 0x18) = 0;
    do {
        func_020ab50c(&data_020e1cb0, -1);
        func_020ab4ec();
        var_r6 += 1;
    } while (var_r6 < 0xA);
}
