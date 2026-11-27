#include "m2c.h"

void *func_02093480(M2C_UNK);                       /* extern */

void func_0207c504(void) {
    void *temp_r0;

    temp_r0 = func_02093480(0x14);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0)    = 0;
    M2C_FIELD(temp_r0, s32 *, 4)    = 0;
    M2C_FIELD(temp_r0, s32 *, 8)    = 0;
    M2C_FIELD(temp_r0, s8 *, 0xE)   = 0;
    M2C_FIELD(temp_r0, s16 *, 0x10) = 0;
}
