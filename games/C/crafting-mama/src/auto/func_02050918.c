#include "engine.h"
#include "m2c.h"

void func_020508e0(M2C_UNK, M2C_UNK);

void func_02050918(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_020508e0(arg0 + 0xC, 1);
}
