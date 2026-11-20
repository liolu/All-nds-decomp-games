#include "m2c.h"

M2C_UNK func_02085550();                            /* extern */
s32 func_020bbc70();                                /* extern */

s32 func_02091774(void) {
    s32 var_r0;

    func_02085550();
    var_r0 = func_020bbc70() + 0xFFFFFDF9;
    if (var_r0 <= 0) {
        var_r0 = 0;
    }
    return var_r0;
}
