#include "m2c.h"

s32 func_0203aadc();                                /* extern */
s32 func_0203ab18();                                /* extern */

s32 func_0203ab54(void) {
    s32 temp_r4;

    temp_r4 = func_0203aadc();
    return (0x100 - temp_r4) - func_0203ab18();
}
