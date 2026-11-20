#include "engine.h"
#include "m2c.h"

void func_0202a5b0(M2C_UNK);

extern s8 data_020d0288;

void func_0202bdb0(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0xB;
    data_020d0288             = 1;
    func_0202a5b0(arg0);
}
