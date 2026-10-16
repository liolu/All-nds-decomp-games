#include "m2c.h"

M2C_UNK func_02064218(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02064a3c();                                /* extern */
M2C_UNK func_02064a50(s32);                         /* extern */
s32 func_0206bd20();                                /* extern */
extern s32 data_02090fe8;

void func_0206bfb8(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_02064a3c();
    data_02090fe8 = arg0;
    if (func_0206bd20() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_02064218(0xF000, var_r1);
    }
    func_02064a50(temp_r4);
}
