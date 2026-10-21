#include "m2c.h"

void *func_02074b14(u8 *arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, u8 *, 5) = (u8) *arg0;
    return arg0 + 1;
}
