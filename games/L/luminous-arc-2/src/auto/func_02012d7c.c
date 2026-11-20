#include "engine.h"

#include "m2c.h"

M2C_UNK func_0200fa98(void);

void func_0200faac(M2C_UNK);

void MI_CpuCopy8(M2C_UNK, M2C_UNK, M2C_UNK);

M2C_UNK func_02014078(M2C_UNK);

extern s32 data_0215088c;

s32 func_02012d7c(s32 arg0) {
    if ((data_0215088c != 0) && (func_02014078(arg0) != 0) &&
        (M2C_FIELD((data_0215088c + ((arg0 - 1) * 4)), s32 *, 0x14E8) == 7)) {
        return 1;
    }
    return 0;
}
