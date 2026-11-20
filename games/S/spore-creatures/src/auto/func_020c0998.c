#include "m2c.h"

M2C_UNK func_020b625c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */
s32 func_020c0700();                                /* extern */
extern s32 data_020f4348;

void func_020c0998(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_020b6bd0();
    data_020f4348 = arg0;
    if (func_020c0700() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_020b625c(0xF000, var_r1);
    }
    func_020b6be4(temp_r4);
}
