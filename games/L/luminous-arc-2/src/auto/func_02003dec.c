#include "m2c.h"

M2C_UNK func_02007180(s32, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_020074d4(M2C_UNK, s32, s32);                /* extern */
extern s32 data_020ee404;

void func_02003dec(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (data_020ee404 != -1) {
        func_02007180(data_020ee404, arg0, arg1 + 0x6000000 + 0x8A0000, arg2, 0, 0);
        return;
    }
    func_020074d4(arg0, arg1 + 0x6000000 + 0x8A0000, arg2);
}
