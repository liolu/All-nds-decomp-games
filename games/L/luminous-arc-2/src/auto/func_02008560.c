#include "m2c.h"

s32 func_020084e8();                                /* extern */
s32 func_02008524();                                /* extern */

s32 func_02008560(void) {
    s32 temp_r4;

    temp_r4 = func_020084e8();
    return (0x100 - temp_r4) - func_02008524();
}
