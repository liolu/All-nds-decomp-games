#include "m2c.h"

s32 func_020b2cf4();                                /* extern */
M2C_UNK func_020b6fd0(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020b7570(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020e0318;

void func_020b3a10(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020b2cf4();
    if ((data_020e0318 != -1) && (arg2 > 0x30U)) {
        func_020b6fd0(data_020e0318, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020b7570(arg0, temp_ip + arg1, arg2);
}
