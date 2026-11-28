/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_02007578(M2C_UNK, s32);                    /* extern */

s32 func_020073b0(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_02007578(arg0, 0x43504F53);
    if (temp_r0 != 0) {
        *arg1 = temp_r0 + 8;
        return 1;
    }
    *arg1 = 0;
    return 0;
}
