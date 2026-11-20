#include "m2c.h"

s32 func_02096340(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 8);
    *arg2 = M2C_FIELD(arg0, s32 *, 0xC);
    return 1;
}
