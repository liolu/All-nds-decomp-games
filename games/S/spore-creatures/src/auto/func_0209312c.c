#include "m2c.h"

s32 func_020aee80(s32, u32, M2C_UNK);               /* extern */
M2C_UNK func_020b597c(M2C_UNK *);                   /* extern */
M2C_UNK func_020b5a00(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e7d2c;
extern M2C_UNK data_020e7d8c;

s32 func_0209312c(u32 arg0, s32 arg1, M2C_UNK arg2) {
    M2C_UNK var_r4;
    s32 temp_r4;

    var_r4 = arg2;
    func_020b597c(&data_020e7d8c);
    if ((arg1 == 0) && (arg0 <= 0x400U)) {
        var_r4 = -0x20;
    }
    temp_r4 = func_020aee80(*((M2C_UNK *) ((s8 *) &data_020e7d2c + (arg1 * 0x18))), arg0, var_r4);
    func_020b5a00(&data_020e7d8c);
    return temp_r4;
}
