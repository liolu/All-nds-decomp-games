#include "m2c.h"

void *func_0208c4e8();                       /* extern */

void func_0208cf04(M2C_UNK arg0, void *arg1) {
    s32 temp_r4;
    s32 temp_r4_2;
    void *temp_r0;

    temp_r4                                     = (s32) M2C_FIELD(arg1, s32 *, 0) >> 0xC;
    M2C_FIELD(func_0208c4e8(), s16 *, 0x3A)     = (s16) temp_r4;
    temp_r4_2                                   = (s32) M2C_FIELD(arg1, s32 *, 4) >> 0xC;
    M2C_FIELD(func_0208c4e8(arg0), s16 *, 0x3C) = (s16) temp_r4_2;
    temp_r0                                     = func_0208c4e8(arg0);
    M2C_FIELD(temp_r0, s32 *, 4)                = (s32) (M2C_FIELD(temp_r0, s32 *, 4) | 1);
}
