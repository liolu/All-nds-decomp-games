#include "engine.h"
#include "m2c.h"

void func_020d4064(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020d47b8(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_02110ca0;

void func_020cfd18(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_02110ca0 != -1) && ((u32) arg2 > 0x1CU)) {
        func_020d4064(data_02110ca0, arg0, arg1 + 0x05000200, arg2);
        return;
    }
    func_020d47b8(arg0, arg1 + 0x05000200, arg2);
}
