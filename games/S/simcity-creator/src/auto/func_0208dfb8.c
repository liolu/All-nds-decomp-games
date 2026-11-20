#include "m2c.h"

u32 func_02070914(s32);                             /* extern */

s32 func_0208dfb8(s32 *arg0) {
    u32 temp_r0;

    temp_r0 = func_02070914(*arg0);
    if ((temp_r0 != 0) && (((temp_r0 >= 0x13U) && (temp_r0 <= 0x1AU)) || (temp_r0 == 0x21))) {
        return 1;
    }
    return 0;
}
