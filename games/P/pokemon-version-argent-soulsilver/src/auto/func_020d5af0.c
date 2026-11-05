#include "m2c.h"

s32 func_020d5a78();                                /* extern */
s32 func_020d5ab4();                                /* extern */

s32 func_020d5af0(void) {
    s32 temp_r4;

    temp_r4 = func_020d5a78();
    return (0x100 - temp_r4) - func_020d5ab4();
}
