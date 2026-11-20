#include "m2c.h"

s32 func_02031c10();                                /* extern */

s32 func_020329e4(void) {
    s32 var_r0;
    u32 temp_r1;

    temp_r1 = func_02031c10() & 7;
    var_r0  = 1;
    if (temp_r1 > 4U) {
        return 1;
    }
    if ((1 << temp_r1) & 0x19) {
        var_r0 = 0;
    }
    return var_r0;
}
