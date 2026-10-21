#include "engine.h"
#include "m2c.h"

void func_02007050(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02007484(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020ee404;

void func_02003330(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020ee404 != -1) && ((u32) arg2 > 0x1CU)) {
        func_02007050(data_020ee404, arg0, arg1 + 0x05000000, arg2);
        return;
    }
    func_02007484(arg0, arg1 + 0x05000000, arg2);
}
