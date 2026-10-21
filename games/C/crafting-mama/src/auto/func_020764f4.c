#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
s32 func_02029490();                                /* extern */
extern M2C_UNK func_02076524;

void func_020764f4(s32 arg0) {
    s32 temp_r4;
    void *temp_r0;

    temp_r4                         = func_02029490();
    temp_r0                         = func_020291d0(&func_02076524, 0x14B);
    M2C_FIELD(temp_r0, s32 *, 0x1C) = temp_r4;
    M2C_FIELD(temp_r0, s32 *, 0x6C) = arg0;
}
