#include "m2c.h"

s32 func_020ad494();                                /* extern */
extern s32 data_02173ca4;

s32 func_020ac760(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (data_02173ca4 != 1) {
        return 2;
    }
    if (arg0 == 0) {
        return 2;
    }
    return func_020ad494(arg0, arg1, arg2, arg3);
}
