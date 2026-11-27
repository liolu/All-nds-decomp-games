/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK _ffix(M2C_UNK);
M2C_UNK _fmul(M2C_UNK, M2C_UNK);

void func_0209153c(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + _ffix(_fmul(0x45800000, arg1)));
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + _ffix(_fmul(0x45800000, arg2)));
}
