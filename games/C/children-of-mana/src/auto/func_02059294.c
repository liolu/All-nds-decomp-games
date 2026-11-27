/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02059c58(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0205a144(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020ff090;

void func_02059294(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020ff090 != -1) && ((u32) arg2 > 0x1CU)) {
        func_02059c58(data_020ff090, arg0, arg1 + 0x05000600, arg2);
        return;
    }
    func_0205a144(arg0, arg1 + 0x05000600, arg2);
}
