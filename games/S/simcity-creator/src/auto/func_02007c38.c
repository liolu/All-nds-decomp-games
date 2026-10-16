#include "m2c.h"

s32 func_02007bc0();                                /* extern */
s32 func_02007bfc();                                /* extern */

s32 func_02007c38(void) {
    s32 temp_r4;

    temp_r4 = func_02007bc0();
    return (0x100 - temp_r4) - func_02007bfc();
}
