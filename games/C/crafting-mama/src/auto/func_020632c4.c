#include "m2c.h"

s32 func_02063784();                                /* extern */

s32 func_020632c4(s32 arg0, s32 arg1) {
    if (arg1 >= 2) {
        return 0;
    }
    if (M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x54) == 0) {
        return 0;
    }
    return func_02063784();
}
