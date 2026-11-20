#include "m2c.h"

s16 func_02059940(s32 arg0, u16 *arg1, u16 *arg2, void *arg3) {
    return (s16) ((M2C_FIELD(arg3, s16 *, 8) - 1) + (*arg1 + *arg2));
}
