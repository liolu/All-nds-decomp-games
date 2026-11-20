#include "m2c.h"

s32 func_02098f24(M2C_UNK, s32, s32, s32);          /* extern */

void func_02098fe8(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5) {
    if ((func_02098f24(arg0, arg1, arg4, arg5) != 0) && (arg3 != 0)) {
        func_02098f24(arg2, arg3, arg4, 0);
    }
}
