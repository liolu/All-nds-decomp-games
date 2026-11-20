#include "m2c.h"

M2C_UNK func_020061ec(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
s32 func_02017b80();                                /* extern */
extern s32 data_021508d8;

void func_02017e18(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_02006be0();
    data_021508d8 = arg0;
    if (func_02017b80() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_020061ec(0xF000, var_r1);
    }
    func_02006bf4(temp_r4);
}
