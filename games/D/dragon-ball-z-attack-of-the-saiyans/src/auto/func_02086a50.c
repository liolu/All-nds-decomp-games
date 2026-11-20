#include "m2c.h"

s32 func_020869d8();                                /* extern */
s32 func_02086a14();                                /* extern */

s32 func_02086a50(void) {
    s32 temp_r4;

    temp_r4 = func_020869d8();
    return (0x100 - temp_r4) - func_02086a14();
}
