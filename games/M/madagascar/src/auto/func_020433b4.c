#include "engine.h"
#include "m2c.h"

void func_020246e8(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020433b4(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), *M2C_FIELD(arg0, s32 **, 0x1E4), 0);
}
