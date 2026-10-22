#include "m2c.h"

s32 func_02063ae4();                                /* extern */

s32 func_020630a0(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    if (func_02063ae4() == 1) {
        return 1;
    }
    return 0;
}
