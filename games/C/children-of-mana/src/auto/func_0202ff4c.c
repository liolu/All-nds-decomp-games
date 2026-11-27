/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_0202fa80();      /* extern */

u8 func_0202ff4c(M2C_UNK arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u8 var_r4;

    temp_r0 = func_0202fa80();
    var_r4  = 0;
    switch (temp_r0) {
        default:
            break;
        case 1:
            var_r4 = 0xF;
            break;
        case 2:
            var_r4 = 0x15;
            break;
        case 3:
            var_r4 = 0x29;
            break;
        case 4:
            var_r4 = 0x46;
            break;
        case 5:
            var_r4 = 0x8A;
            break;
    }
    temp_r0_2 = func_0202fa80(arg0, arg1, arg2 - 1, arg3);
    if ((temp_r0_2 == 1) || ((u32) (u16) (temp_r0_2 + 0xFFFC) <= 1U)) {
        var_r4 &= ~1;
    }
    temp_r0_3 = func_0202fa80(arg0, arg1 + 1, arg2, arg3);
    if ((temp_r0_3 == 1) || (temp_r0_3 == 2) || (temp_r0_3 == 4)) {
        var_r4 &= ~8;
    }
    if ((u32) (u16) (func_0202fa80(arg0, arg1, arg2 + 1, arg3) + 0xFFFF) <= 2U) {
        var_r4 &= ~2;
    }
    temp_r0_4 = func_0202fa80(arg0, arg1 - 1, arg2, arg3);
    if ((temp_r0_4 == 1) || (temp_r0_4 == 3) || (temp_r0_4 == 5)) {
        var_r4 &= ~4;
    }
    return var_r4;
}
