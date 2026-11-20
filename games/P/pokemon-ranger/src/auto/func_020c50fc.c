/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c8684(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020c87d8(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020f11c0;

void func_020c50fc(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020f11c0 != -1) && ((u32) arg2 > 0x30U)) {
        func_020c8684(data_020f11c0, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_020c87d8(arg0, arg1 + 0x07000000, arg2);
}
