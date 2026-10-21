#include "engine.h"
#include "m2c.h"

void func_020541e0(M2C_UNK);

void func_02054190(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x44) == arg1) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x44) = (u8) arg1;
    func_020541e0(arg0);
    M2C_FIELD(arg0, s8 *, 0x42) = 1;
}
