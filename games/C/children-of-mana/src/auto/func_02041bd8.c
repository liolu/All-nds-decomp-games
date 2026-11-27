/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02040834(M2C_UNK, M2C_UNK);

void func_02041bd8(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x17A) = (s16) func_02040834(arg1, arg0 + 0x170);
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) | 8);
}
