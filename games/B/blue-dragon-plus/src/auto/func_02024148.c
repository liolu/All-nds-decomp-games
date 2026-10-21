#include "m2c.h"

M2C_UNK func_02023bb8(M2C_UNK, s32, s32, s32);      /* extern */
M2C_UNK func_02023c2c(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_02023cf0(M2C_UNK, s32);                /* extern */

void func_02024148(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if ((arg3 != 0) && (arg1 != 0)) {
        func_02023bb8(arg0, arg3, arg1, arg5);
    }
    if (arg2 != 0) {
        func_02023c2c(arg0, arg2, arg4);
    }
    if (arg1 == 0) {
        return;
    }
    func_02023cf0(arg0, arg1);
}
