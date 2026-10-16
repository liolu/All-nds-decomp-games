#include "m2c.h"

s32 func_02018e50();                                /* extern */
s32 func_02018e8c();                                /* extern */

s32 func_02018ec8(void) {
    s32 temp_r4;

    temp_r4 = func_02018e50();
    return (0x100 - temp_r4) - func_02018e8c();
}
