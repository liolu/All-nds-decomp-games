#include "m2c.h"

s32 func_02031c10();                                /* extern */

s32 func_02032a48(void) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02031c10();
    if ((temp_r0 & 7) == 3) {
        if (temp_r0 & 8) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
