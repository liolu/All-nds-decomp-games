#include "m2c.h"

s32 func_020b4b50(void *);                          /* extern */

void func_020b8358(void *arg0, s8 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0) != 7) {
        return;
    }
    if (arg2 == func_020b4b50(arg0 + 4)) {
        M2C_FIELD(arg0, s8 *, 0xA34) = arg1;
    }
}
