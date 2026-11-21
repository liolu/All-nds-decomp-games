#include "m2c.h"

s32 func_0209f0a8(void **, s32, M2C_UNK);           /* extern */

s32 func_0209f10c(void **arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    if (arg1 != 0) {
        if (arg2 != 0) {
            return arg1;
        }
        M2C_FIELD(*arg0, M2C_UNK(**)(), 0x18)(arg0, arg1);
        return 0;
    }
    return func_0209f0a8(arg0, arg2, arg3);
}
