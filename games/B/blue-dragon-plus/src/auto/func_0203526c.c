#include "engine.h"
#include "m2c.h"

void func_02039264(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020398e8(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020826b8;

void func_0203526c(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020826b8 != -1) && ((u32) arg2 > 0x1CU)) {
        func_02039264(data_020826b8, arg0, arg1 + 0x05000200, arg2);
        return;
    }
    func_020398e8(arg0, arg1 + 0x05000200, arg2);
}
