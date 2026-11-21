#include "m2c.h"

s32 func_ov000_02200914(void *, s32, s32);
extern s32 data_ov000_0221b0f0;

s32 func_ov000_021ffd70(void *arg0, s32 arg1, s32 arg2) {
    if (data_ov000_0221b0f0 != 1) {
        return 2;
    }
    if (arg0 == 0) {
        return 2;
    }
    return func_ov000_02200914(arg0, arg1, arg2);
}
