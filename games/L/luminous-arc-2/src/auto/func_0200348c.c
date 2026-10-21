#include "engine.h"
#include "m2c.h"

void func_02006fe0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020074d4(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020ee404;

void func_0200348c(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020ee404 != -1) && ((u32) arg2 > 0x30U)) {
        func_02006fe0(data_020ee404, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_020074d4(arg0, arg1 + 0x07000000, arg2);
}
