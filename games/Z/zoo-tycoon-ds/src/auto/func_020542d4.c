/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008f8c();            /* extern */
M2C_UNK func_020091e0();                     /* extern */
M2C_UNK func_020094c4();                     /* extern */
extern s32 data_0217ff64;

s32 func_020542d4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    M2C_UNK saved_reg_r6;
    s32 temp_r5;
    s32 var_r6;

    var_r6  = saved_reg_r6;
    temp_r5 = (arg2 * 0x24) + (arg0 + 0x570);
    if (arg1 == 0) {
        M2C_FIELD(temp_r5, s32 *, 0x1C) = (s32) data_0217ff64;
        var_r6                          = data_0217ff64;
        func_020094c4(arg4, temp_r5);
        func_02008f8c(arg4, data_0217ff64, 0);
        M2C_FIELD(temp_r5, s8 *, 0x20) = 0;
    } else if (arg1 == 1) {
        func_020091e0(arg4, temp_r5);
        M2C_FIELD(temp_r5, s8 *, 0x20)  = 0;
        var_r6                          = -1;
        M2C_FIELD(temp_r5, s32 *, 0x1C) = -1;
    }
    M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) M2C_FIELD((arg0 + (arg3 * 4)), s32 *, 0x6B4);
    return var_r6;
}
