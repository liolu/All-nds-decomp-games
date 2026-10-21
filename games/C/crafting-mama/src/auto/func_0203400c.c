#include "m2c.h"

void *func_020291d0(M2C_UNK *, M2C_UNK);            /* extern */
extern M2C_UNK func_02034040;

void func_0203400c(s32 arg0, s32 arg1) {
    void *temp_r0;

    if (arg1 == 0) {
        return;
    }
    temp_r0                         = func_020291d0(&func_02034040, 0xE);
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x20) = 1;
}
