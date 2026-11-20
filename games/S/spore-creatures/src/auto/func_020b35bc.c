#include "engine.h"
#include "m2c.h"

void func_020b70c0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020b7540(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020e0318;

void func_020b35bc(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020e0318 != -1) && ((u32) arg2 > 0x1CU)) {
        func_020b70c0(data_020e0318, arg0, arg1 + 0x05000600, arg2);
        return;
    }
    func_020b7540(arg0, arg1 + 0x05000600, arg2);
}
