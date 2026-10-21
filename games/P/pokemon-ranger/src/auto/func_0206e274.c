#include "engine.h"
#include "m2c.h"

M2C_UNK func_0206e45c(M2C_UNK);

void func_0206e274(s32 arg0, s32 arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, u16 *, 0x302) == 0) {
        return;
    }
    temp_r0 = func_0206e45c(arg0);
    if (temp_r0 != 0) {
        M2C_FIELD(temp_r0, s32 *, 0x40) = arg1;
    }
}
