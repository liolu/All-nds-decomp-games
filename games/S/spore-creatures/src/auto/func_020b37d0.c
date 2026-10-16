#include "m2c.h"

s32 func_020b2b44();                                /* extern */
M2C_UNK func_020b70c0(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020b7540(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020e0318;

void func_020b37d0(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020b2b44();
    if ((data_020e0318 != -1) && (arg2 > 0x1CU)) {
        func_020b70c0(data_020e0318, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020b7540(arg0, temp_ip + arg1, arg2);
}
