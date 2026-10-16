#include "m2c.h"

s32 func_0200275c();                                /* extern */
M2C_UNK func_02006a10(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_02006e4c(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020c7a84;

void func_02003450(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_0200275c();
    if ((data_020c7a84 != -1) && (arg2 > 0x30U)) {
        func_02006a10(data_020c7a84, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_02006e4c(arg0, temp_ip + arg1, arg2);
}
