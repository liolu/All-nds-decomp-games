#include "engine.h"
#include "m2c.h"

void func_02029e00(M2C_UNK);

void func_02029e60(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    func_02029e00(arg0);
}
