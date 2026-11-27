/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020aac90();                                /* extern */

s32 func_0204f7c4(u32 arg0) {
    M2C_UNK saved_reg_r4;
    s32 temp_r0;
    s32 var_r4;

    var_r4  = saved_reg_r4;
    temp_r0 = func_020aac90();
    switch (arg0) {
        default:
            break;
        case 1:
            var_r4 = temp_r0 + 0x3CC;
            break;
        case 2:
            var_r4 = temp_r0 + 0x3D0;
            break;
        case 3:
            var_r4 = temp_r0 + 0x3DC;
            break;
        case 4:
            var_r4 = temp_r0 + 0x3E8;
            break;
        case 5:
            var_r4 = temp_r0 + 0x400;
            break;
    }
    return var_r4;
}
