#include "m2c.h"

s32 func_02029924();                                /* extern */

s32 func_020616d4(s32 arg0) {
    if (M2C_FIELD((func_02029924() + (arg0 * 4)), u8 *, 0x1C) != 0) {
        return 1;
    }
    return 0;
}
