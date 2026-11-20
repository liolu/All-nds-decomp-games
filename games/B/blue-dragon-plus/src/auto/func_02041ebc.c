#include "m2c.h"

M2C_UNK func_0203801c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */
s32 func_02041c24();                                /* extern */
extern s32 data_021604a8;

void func_02041ebc(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_02038e10();
    data_021604a8 = arg0;
    if (func_02041c24() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_0203801c(0xF000, var_r1);
    }
    func_02038e24(temp_r4);
}
