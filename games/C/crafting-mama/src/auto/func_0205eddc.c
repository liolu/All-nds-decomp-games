#include "m2c.h"

M2C_UNK func_02019f88();                            /* extern */
s32 func_0205ed90();                                /* extern */

s32 func_0205eddc(void) {
    s32 temp_r0;

    temp_r0 = func_0205ed90();
    if (temp_r0 == 0) {
        func_02019f88();
    }
    return temp_r0;
}
