#include "m2c.h"
M2C_UNK func_02007180(s32, M2C_UNK, s32, s32, s32, s32);
M2C_UNK func_020074d4(M2C_UNK, s32, s32);
extern s32 data_020ee404;
extern M2C_UNK data_02147840;
void func_02003c68(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 off = M2C_FIELD(&data_02147840, s32 *, 4) + arg1;
    if (data_020ee404 != -1) {
        func_02007180(data_020ee404, arg0, off, arg2, 0, 0);
        return;
    }
    func_020074d4(arg0, off, arg2);
}