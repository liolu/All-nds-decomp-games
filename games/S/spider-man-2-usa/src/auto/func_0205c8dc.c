/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205bacc(s32, s32);                        /* extern */
M2C_UNK func_0205c5a0(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0216331c;

void func_0205c8dc(s32 arg0, M2C_UNK arg1) {
    u32 temp_r4;
    u32 temp_r5;
    u32 var_r6;

    temp_r5 = (arg0 * 0x1C) + (s32) &data_0216331c;
    var_r6  = func_0205bacc(temp_r5, 0);
    if (var_r6 == 0) {
        return;
    }
    do {
        temp_r4 = func_0205bacc(temp_r5, var_r6);
        func_0205c5a0(var_r6, arg1);
        var_r6 = temp_r4;
    } while (temp_r4 != 0);
}
