#include "engine.h"
#include "m2c.h"

void func_020053c0(M2C_UNK);

void func_02005394(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg0, s32 *, 8)) {
        func_020053c0(arg0);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}
