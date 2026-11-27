/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8();   /* extern */
s32 func_0200f270();                    /* extern */
s32 func_020121b4();                /* extern */
M2C_UNK func_02014d74();                            /* extern */
s32 func_020ded70();                    /* extern */
extern M2C_UNK data_02100688;
extern M2C_UNK data_02100de8;
extern s32 data_021266c4;

void func_02082348(M2C_UNK arg0) {
    M2C_UNK saved_reg_r5;
    M2C_UNK var_r5;
    s32 temp_r0;
    s32 var_r0;

    var_r5  = saved_reg_r5;
    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02100de8, &data_02100688, temp_r0);
    switch (temp_r0) {                              /* irregular */
        case 1:
            var_r5 = 0xA;
            break;
        case 0:
            var_r5 = 9;
            break;
    }
    var_r0 = func_0200f270(0x18F0, 0);
    if (var_r0 != 0) {
        var_r0 = func_020ded70(var_r0, var_r5);
    }
    data_021266c4 = var_r0;
    func_02014d74();
}
