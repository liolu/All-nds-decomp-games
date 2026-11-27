#include "m2c.h"

s32 func_020cef28();                                /* extern */
M2C_UNK func_020d3ff4(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_020d4808(M2C_UNK, s32, u32);           /* extern */
extern s32 data_02110ca0;

void func_020d02e4(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_020cef28();
    if ((data_02110ca0 != -1) && (arg2 > 0x30U)) {
        func_020d3ff4(data_02110ca0, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_020d4808(arg0, temp_ip + arg1, arg2);
}
