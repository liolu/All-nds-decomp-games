#include "m2c.h"
M2C_UNK func_020b71f0(s32, M2C_UNK, s32, s32, s32, s32);
M2C_UNK func_020b7570(M2C_UNK, s32, s32);
extern s32 data_020e0318;
extern M2C_UNK data_020f18cc;
void func_020b41d4(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 off = M2C_FIELD(&data_020f18cc, s32 *, 8) + arg1;
    if (data_020e0318 != -1) {
        func_020b71f0(data_020e0318, arg0, off, arg2, 0, 0);
        return;
    }
    func_020b7570(arg0, off, arg2);
}
