/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02040890(M2C_UNK, M2C_UNK);

void func_02041c08(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x178) = (s16) func_02040890(arg1, arg0 + 0x16C);
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) | 4);
}
