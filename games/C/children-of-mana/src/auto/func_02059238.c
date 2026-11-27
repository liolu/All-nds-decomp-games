/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02059cd0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0205a174(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020ff090;

void func_02059238(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020ff090 != -1) && ((u32) arg2 > 0x30U)) {
        func_02059cd0(data_020ff090, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_0205a174(arg0, arg1 + 0x07000000, arg2);
}
