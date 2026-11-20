/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

s32 func_020c8664();                                /* extern */
extern M2C_UNK data_02175a4c;

s32 func_020c89bc(void) {
    s32 var_r0;

    if (func_020c8664() != 0) {
        if (M2C_FIELD(&data_02175a4c, u8 *, 0x20A) != 0) {
            var_r0 = 0;
        } else {
            var_r0 = 1;
        }
        return var_r0;
    }
    return 0;
}
