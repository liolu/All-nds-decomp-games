#include "m2c.h"
M2C_UNK func_02006bb0(s32, M2C_UNK, s32, s32, s32, s32);
M2C_UNK func_02006e4c(M2C_UNK, s32, s32);
extern s32 data_020c7a84;
extern M2C_UNK data_020d0ba0;
void func_020038f0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 off = M2C_FIELD(&data_020d0ba0, s32 *, 4) + arg1;
    if (data_020c7a84 != -1) {
        func_02006bb0(data_020c7a84, arg0, off, arg2, 0, 0);
        return;
    }
    func_02006e4c(arg0, off, arg2);
}