#include "m2c.h"

M2C_UNK func_02006bb0(s32, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_02006e4c(M2C_UNK, s32, s32);                /* extern */
extern s32 data_020c7a84;

void func_02003a74(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (data_020c7a84 != -1) {
        func_02006bb0(data_020c7a84, arg0, arg1 + 0x6000000 + 0x8A0000, arg2, 0, 0);
        return;
    }
    func_02006e4c(arg0, arg1 + 0x6000000 + 0x8A0000, arg2);
}
