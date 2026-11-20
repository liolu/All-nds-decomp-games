/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02043318();                            /* extern */

s32 func_02043550(s32 arg0, void *arg1) {
    s32 var_r2;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg1, u32 *, 4);
    var_r2  = 0;
    switch (temp_r1) {
        default:
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            func_02043318(arg0);
            var_r2 = 1;
            break;
    }
    return var_r2;
}
