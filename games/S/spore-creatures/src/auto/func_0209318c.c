#include "m2c.h"

M2C_UNK func_020af010(s32, M2C_UNK);                /* extern */
s32 func_020af084(M2C_UNK);                         /* extern */
s32 func_020af08c(M2C_UNK);                         /* extern */
M2C_UNK func_020b597c(M2C_UNK *);                   /* extern */
M2C_UNK func_020b5a00(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020e7d2c;
extern M2C_UNK data_020e7d8c;

s32 func_0209318c(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    func_020b597c(&data_020e7d8c);
    temp_r5 = *((M2C_UNK *) ((s8 *) &data_020e7d2c + (func_020af08c(arg0) * 0x18)));
    temp_r4 = func_020af084(arg0);
    func_020af010(temp_r5, arg0);
    func_020b5a00(&data_020e7d8c);
    return temp_r4;
}
