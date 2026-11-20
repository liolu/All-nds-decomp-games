#include "engine.h"
#include "m2c.h"

void func_020052f8(M2C_UNK);

void func_020052cc(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg0, s32 *, 8)) {
        func_020052f8(arg0);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}
