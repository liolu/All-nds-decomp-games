#include "m2c.h"

s32 func_020aa6e0();                         /* extern */

s32 func_020ab22c(M2C_UNK arg0) {
    if (func_020aa6e0() != 7) {
        return 1;
    }
    if (func_020aa6e0(arg0) != 6) {
        return 1;
    }
    return 0;
}
