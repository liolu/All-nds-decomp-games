#include "m2c.h"

M2C_UNK func_02006bb0(s32, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_02006e4c(M2C_UNK, s32, s32);                /* extern */
extern s32 data_020c7a84;
extern M2C_UNK data_020d0bbc;

void func_02003edc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 off = M2C_FIELD(&data_020d0bbc, s32 *, 0x10) + 0x20000;
    if (data_020c7a84 != -1) {
        func_02006bb0(data_020c7a84, arg0, off, arg1, 0, 0);
        return;
    }
    func_02006e4c(arg0, off, arg1);
}
