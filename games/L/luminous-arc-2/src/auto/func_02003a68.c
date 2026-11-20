#include "m2c.h"

s32 func_02002da8();                                /* extern */
M2C_UNK func_02006fe0(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020074d4(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020ee404;

void func_02003a68(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_02002da8();
    if ((data_020ee404 != -1) && (arg2 > 0x30U)) {
        func_02006fe0(data_020ee404, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020074d4(arg0, temp_ip + arg1, arg2);
}
