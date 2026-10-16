#include "engine.h"
#include "m2c.h"

void func_0200461c(M2C_UNK);

void func_020045f0(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg0, s32 *, 8)) {
        func_0200461c(arg0);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}
