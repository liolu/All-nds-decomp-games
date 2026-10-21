#include "engine.h"
#include "m2c.h"

void func_02025824(M2C_UNK);
void func_02025998(M2C_UNK, M2C_UNK);
void func_02027034(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02025698(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (M2C_FIELD(arg0, u8 *, 0x2C) != 0)) {
        if (arg1 == 0) {
            func_02025824(arg0);
            return;
        }
        func_02027034(arg0 + 0x1C, 0, arg1);
        func_02025998(arg0, 0);
        M2C_FIELD(arg0, u8 *, 0x2C) = 2U;
    }
}
