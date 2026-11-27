#include "m2c.h"

s32 func_0202a760(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 8)  = arg2;
    return M2C_FIELD(arg0, s32 *, 0);
}
