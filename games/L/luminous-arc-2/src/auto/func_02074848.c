#include "m2c.h"

void *func_02074848(s8 *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, u8 *, 4) = (u8) (M2C_FIELD(arg2, u8 *, 4) + *arg0);
    return arg0 + 1;
}
