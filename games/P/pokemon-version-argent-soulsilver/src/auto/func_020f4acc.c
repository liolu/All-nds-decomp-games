#include "m2c.h"

s32 func_020e9734(s32, s32);                        /* extern */

s32 func_020f4acc(void *arg0, void *arg1) {
    if ((arg0 == arg1) || (func_020e9734(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4)) == 0)) {
        return 1;
    }
    return 0;
}
