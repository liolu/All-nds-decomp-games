#include "engine.h"
#include "m2c.h"

M2C_UNK func_0202cb6c(M2C_UNK);

void func_0202cdb0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0                         = (void *) func_0202cb6c(arg0);
    M2C_FIELD(temp_r0, s32 *, 0x24) = -1;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = arg2;
}
