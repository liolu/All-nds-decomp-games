#include "m2c.h"

s32 func_020b8508();                                /* extern */
s32 func_020b8544();                                /* extern */

s32 func_020b8580(void) {
    s32 temp_r4;

    temp_r4 = func_020b8508();
    return (0x100 - temp_r4) - func_020b8544();
}
