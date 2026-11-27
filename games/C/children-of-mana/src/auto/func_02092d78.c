#include "engine.h"
#include "m2c.h"

void func_0203fc9c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02092d78(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1A8) = -0x100;
    func_0203fc9c(arg0 + 0x1B4, M2C_FIELD(arg0, s32 *, 0x218), (s32) (u16) arg1);
}
