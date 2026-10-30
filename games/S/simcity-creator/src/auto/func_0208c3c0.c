#include "m2c.h"

s32 func_020705d4(s32);                             /* extern */

s32 func_0208c3c0(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_020705d4(M2C_FIELD(arg0, s32 *, 0xC));
    switch (temp_r0) {                              /* irregular */
        case 11:
        case 10:
        case 2:
            return 1;
        case 1:
            if (M2C_FIELD(arg0, s32 *, 0x60F0) != 0) {
                return 1;
            }
        default:
            return 0;
    }
}
