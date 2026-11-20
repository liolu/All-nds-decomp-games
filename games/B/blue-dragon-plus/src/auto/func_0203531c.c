#include "engine.h"
#include "m2c.h"

void func_020391f4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02039918(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020826b8;

void func_0203531c(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020826b8 != -1) && ((u32) arg2 > 0x30U)) {
        func_020391f4(data_020826b8, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_02039918(arg0, arg1 + 0x07000000, arg2);
}
