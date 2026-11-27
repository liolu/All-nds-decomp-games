#include "m2c.h"

s32 func_0206055c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (((s32) (arg0 - arg2) <= arg4) && (arg4 <= (s32) (arg0 + arg2)) && ((s32) (arg1 - arg3) <= arg5) &&
        (arg5 <= (s32) (arg1 + arg3))) {
        return 1;
    }
    return 0;
}
