#include "m2c.h"

s32 func_02066018();                                /* extern */
s32 func_02066054();                                /* extern */

s32 func_02066090(void) {
    s32 temp_r4;

    temp_r4 = func_02066018();
    return (0x100 - temp_r4) - func_02066054();
}
