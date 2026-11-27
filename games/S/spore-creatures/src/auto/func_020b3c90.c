#include "m2c.h"

M2C_UNK func_020b71f0(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32);
M2C_UNK func_020b7570(M2C_UNK, s32, s32);
extern s32 data_020e0318;
extern M2C_UNK data_020f18b0;

void func_020b3c90(M2C_UNK arg0, s32 arg1, s32 arg2) {
    /* data_020f18b0.bgExtPlttAddr (+0x10) and .bgExtPlttOffset (+0xc) */
    s32 off = M2C_FIELD(&data_020f18b0, s32 *, 0x10) + arg1 - M2C_FIELD(&data_020f18b0, s32 *, 0xc);
    if (data_020e0318 != -1) {
        func_020b71f0(data_020e0318, arg0, off, arg2, 0, 0);
        return;
    }
    func_020b7570(arg0, off, arg2);
}
