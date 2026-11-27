#include "m2c.h"

M2C_UNK func_020b6fd0(s32, M2C_UNK, s32, s32);
M2C_UNK func_020b71f0(s32, M2C_UNK, s32, s32, s32, s32);
M2C_UNK func_020b7570(M2C_UNK, s32, s32);
extern s32 data_020e0318;
extern M2C_UNK data_020f18cc;

void func_020b4014(void *arg0, u32 arg1, u32 arg2) {
    u32 second = M2C_FIELD(&data_020f18cc, u32 *, 0x18);
    u32 dest;
    if (second == 0) {
        dest = M2C_FIELD(&data_020f18cc, u32 *, 4) + arg1;
    } else if (arg1 + arg2 < M2C_FIELD(&data_020f18cc, u32 *, 0x1c)) {
        dest = M2C_FIELD(&data_020f18cc, u32 *, 4) + arg1;
    } else if (arg1 >= M2C_FIELD(&data_020f18cc, u32 *, 0x1c)) {
        dest = second + arg1 - M2C_FIELD(&data_020f18cc, u32 *, 0x1c);
    } else {
        u32 n    = M2C_FIELD(&data_020f18cc, u32 *, 0x1c) - arg1;
        u32 base = M2C_FIELD(&data_020f18cc, u32 *, 4);
        if (data_020e0318 != -1 && n > 0x30) {
            func_020b6fd0(data_020e0318, arg0, base + arg1, n);
        } else {
            func_020b7570(arg0, base + arg1, n);
        }
        if (data_020e0318 != -1) {
            func_020b71f0(data_020e0318, (u8 *) arg0 + n, second, arg2 - n, 0, 0);
        } else {
            func_020b7570((u8 *) arg0 + n, second, arg2 - n);
        }
        return;
    }
    if (data_020e0318 != -1) {
        func_020b71f0(data_020e0318, arg0, dest, arg2, 0, 0);
    } else {
        func_020b7570(arg0, dest, arg2);
    }
}
