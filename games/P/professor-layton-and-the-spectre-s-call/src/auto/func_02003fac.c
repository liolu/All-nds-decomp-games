#include "engine.h"
#include "m2c.h"

void func_0200370c(M2C_UNK);

void func_02003fac(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r0 == 0) {
        return;
    }
    func_0200370c(temp_r0);
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}
