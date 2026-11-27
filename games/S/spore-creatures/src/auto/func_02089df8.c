#include "m2c.h"

s32 func_02084fa0();                                /* extern */

s32 func_02089df8(void) {
    s32 var_r0;

    var_r0 = func_02084fa0();
    if (var_r0 <= -1) {
        var_r0 = 0x18;
    }
    return var_r0;
}
