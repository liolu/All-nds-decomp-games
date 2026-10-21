#include "m2c.h"

s32 func_02093a30();                                /* extern */
u32 func_0207b620();                                /* extern */
M2C_UNK func_02083a64(M2C_UNK, s32);                /* extern */
M2C_UNK func_02083e50();                            /* extern */
s32 func_02084290();                                /* extern */

s32 func_02084428(void) {
    u32 var_r4;

    func_02083e50();
    if (func_02084290() != 0) {
        var_r4 = func_0207b620();
        if ((var_r4 == 0xFF) || (var_r4 > 0x63U)) {
            var_r4 = 0x63;
        }
        if (func_02093a30() == 0xB) {
            func_02083a64(9, 0xFFFF298C - var_r4);
        } else {
            func_02083a64(8, 0xFFFF2D10 - var_r4);
        }
        return 1;
    }
    return 0;
}
