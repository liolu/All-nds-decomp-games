#include "engine.h"
#include "m2c.h"

void func_0203209c(M2C_UNK, M2C_UNK);

void func_02032070(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0x36)  = 1;
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg2, s32 *, 8);
    func_0203209c(arg0, arg1);
}
