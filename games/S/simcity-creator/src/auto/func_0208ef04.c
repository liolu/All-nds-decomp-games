#include "m2c.h"

s32 func_0208ef04(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 var_r0;
    s32 var_r3;

    if ((arg1 >= arg3) && (arg1 <= (s32) (arg3 + arg5))) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    if ((arg2 >= arg4) && (arg2 <= (s32) (arg4 + arg6))) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r3 & var_r0;
}
