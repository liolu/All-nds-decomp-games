/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020569f8(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02058434(s32 arg0, s32 arg1, s32 arg2) {
    *(M2C_UNK *) arg0 =
        func_020569f8(M2C_FIELD(arg1, s32 *, 8), (s32) (u16) arg2, (s32) ((u32) (M2C_FIELD(arg1, s32 *, 0) * 0x10) >> 0x10));
}
