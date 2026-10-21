#include "engine.h"
#include "m2c.h"

void func_020074d4(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02090a40(void);

void func_0208cf0c(s32 arg0, s32 arg1) {
    u32 temp_r4;

    temp_r4 = *(M2C_UNK *) arg1 + 2;
    if (temp_r4 > 2U) {
        func_020074d4(arg1 + 4, func_02090a40() + 0x350, (temp_r4 - 2) * 4);
    }
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x348) = (s32) (temp_r4 - 1);
    M2C_FIELD((void *) func_02090a40(), s32 *, 0x34C) = arg0;
}
