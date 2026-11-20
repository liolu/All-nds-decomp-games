#include "m2c.h"

s32 func_02070008(s32);                             /* extern */

void *func_0207dfa0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = func_02070008(arg1);
    return arg0;
}
