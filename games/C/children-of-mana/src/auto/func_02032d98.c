/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02010b2c(M2C_UNK, M2C_UNK);

void func_02032d98(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02010b2c(arg0 + 0x60, arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    M2C_FIELD(arg0, s32 *, 0x44) = arg2;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = arg3;
    M2C_FIELD(arg0, s32 *, 0x34) = 3;
}
