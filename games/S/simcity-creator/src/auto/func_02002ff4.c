#include "engine.h"
#include "m2c.h"

void func_02006a10(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02006e4c(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020c7a84;

void func_02002ff4(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020c7a84 != -1) && ((u32) arg2 > 0x30U)) {
        func_02006a10(data_020c7a84, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_02006e4c(arg0, arg1 + 0x07000000, arg2);
}
