/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0206b144(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206b28c(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020ce008;

void func_02068cf0(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020ce008 != -1) && ((u32) arg2 > 0x30U)) {
        func_0206b144(data_020ce008, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_0206b28c(arg0, arg1 + 0x07000000, arg2);
}
