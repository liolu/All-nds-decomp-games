#include "m2c.h"

void *func_020291d0(M2C_UNK *, M2C_UNK);            /* extern */
extern M2C_UNK func_0206778c;

void func_02067754(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r0;

    temp_r0                         = func_020291d0(&func_0206778c, 0x13);
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x30) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x34) = arg3;
}
