#include "m2c.h"

s32 func_02063bd8();                                /* extern */

s32 func_020630e8(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    if (func_02063bd8() == 1) {
        return 1;
    }
    return 0;
}
