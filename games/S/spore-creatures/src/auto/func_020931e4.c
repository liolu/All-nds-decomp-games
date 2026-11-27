#include "m2c.h"

M2C_UNK func_020aeeb0(s32, s32, M2C_UNK);           /* extern */
s32 func_020af08c(s32);                             /* extern */
M2C_UNK func_020b597c(M2C_UNK *);                   /* extern */
M2C_UNK func_020b5a00(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e7d2c;
extern M2C_UNK data_020e7d8c;

s32 func_020931e4(s32 arg0, M2C_UNK arg1) {
    func_020b597c(&data_020e7d8c);
    func_020aeeb0(*((M2C_UNK *) ((s8 *) &data_020e7d2c + (func_020af08c(arg0) * 0x18))), arg0, arg1);
    func_020b5a00(&data_020e7d8c);
    return arg0;
}
