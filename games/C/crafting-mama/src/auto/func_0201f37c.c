#include "m2c.h"

s32 func_0201f304();                                /* extern */
s32 func_0201f340();                                /* extern */

s32 func_0201f37c(void) {
    s32 temp_r4;

    temp_r4 = func_0201f304();
    return (0x100 - temp_r4) - func_0201f340();
}
