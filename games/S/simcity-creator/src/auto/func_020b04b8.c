#include "m2c.h"

M2C_UNK func_020b037c(s32, u8, u8, s32);            /* extern */
M2C_UNK func_020b03cc(s32, s32, s32);               /* extern */

void func_020b04b8(s32 arg0) {
    s32 temp_r3;
    u8 var_ip;

    var_ip = 0;
    do {
        temp_r3                          = (var_ip * 0x28) + arg0;
        M2C_FIELD(temp_r3, s32 *, 0x124) = 0;
        var_ip += 1;
        M2C_FIELD(temp_r3, s32 *, 0x118) = 0;
        M2C_FIELD(temp_r3, s16 *, 0x11C) = 0;
    } while ((u32) var_ip < 8U);
    func_020b037c(arg0 + 0xE8, M2C_FIELD(arg0, u8 *, 0x254), M2C_FIELD(arg0, u8 *, 0x255), M2C_FIELD(arg0, s32 *, 0x258));
    func_020b03cc(arg0 + 8, arg0 + 0xA0, M2C_FIELD(arg0, s32 *, 0x258));
    M2C_FIELD(arg0, s32 *, 4) = -1;
}
