#include "m2c.h"
extern s32 func_020e9580(s8 *);
extern s32 func_020e5bb0(void *, void *, s32);
s32 func_ov013_0223faa4(s8 *arg0, s8 *arg1, s32 arg2) {
    s32 a = func_020e9580(arg0);
    s32 b = func_020e9580(arg1);
    if (a < arg2 || b < arg2) {
        return 0;
    }
    if (func_020e5bb0(arg0 + (a - arg2), arg1 + (b - arg2), arg2) == 0) {
        return 1;
    }
    return 0;
}
