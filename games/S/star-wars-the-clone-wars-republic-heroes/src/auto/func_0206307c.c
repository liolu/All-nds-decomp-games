#include "m2c.h"

s32 func_020638d0();                                /* extern */

s32 func_0206307c(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    if (func_020638d0() == 1) {
        return 1;
    }
    return 0;
}
