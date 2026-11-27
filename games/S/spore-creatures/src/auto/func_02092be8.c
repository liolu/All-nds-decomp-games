#include "m2c.h"

M2C_UNK func_02092c68(M2C_UNK, s32, M2C_UNK, s32);  /* extern */

void func_02092be8(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (arg1 != 8) {
        func_02092c68(arg0, arg1, 1, arg5);
    }
    if (arg2 != 8) {
        func_02092c68(arg0, arg2, 5, arg5);
    }
    if (arg3 != 8) {
        func_02092c68(arg0, arg3, 9, arg5);
    }
    if (arg4 == 8) {
        return;
    }
    func_02092c68(arg0, arg4, 0xD, arg5);
}
