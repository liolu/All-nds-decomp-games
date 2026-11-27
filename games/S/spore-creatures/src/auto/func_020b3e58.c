#include "m2c.h"

M2C_UNK func_020b71f0(s32, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_020b7570(M2C_UNK, s32);                /* extern */
extern s32 data_020e0318;

void func_020b3e58(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (data_020e0318 != -1) {
        func_020b71f0(data_020e0318, arg0, arg1 + 0x06898000, arg2, 0, 0);
        return;
    }
    func_020b7570(arg0, arg1 + 0x06898000);
}
