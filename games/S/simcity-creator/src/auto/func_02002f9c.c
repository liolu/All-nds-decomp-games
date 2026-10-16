#include "engine.h"
#include "m2c.h"

void func_02006a80(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02006e1c(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020c7a84;

void func_02002f9c(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020c7a84 != -1) && ((u32) arg2 > 0x1CU)) {
        func_02006a80(data_020c7a84, arg0, arg1 + 0x05000600, arg2);
        return;
    }
    func_02006e1c(arg0, arg1 + 0x05000600, arg2);
}
