/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020653a4(M2C_UNK);

void func_020653bc(s32 arg0) {
    func_020653a4(arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 1;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
