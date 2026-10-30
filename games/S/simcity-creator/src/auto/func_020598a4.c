#include "m2c.h"

s32 func_0205934c(void *, M2C_UNK);                 /* extern */
s32 func_0205938c(void *, M2C_UNK, s32);            /* extern */
s32 func_020593ec(void *, M2C_UNK);                 /* extern */
s32 func_02059414(void *, M2C_UNK, s32);            /* extern */
s16 func_02059940(void *, M2C_UNK, s32, M2C_UNK);   /* extern */

void func_020598a4(void *arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    s32 temp_r9;
    s32 temp_r9_2;
    s8 temp_r4;
    s8 temp_r4_2;

    temp_r4                   = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s8 *, 0);
    temp_r9                   = func_02059414(arg0, arg3, arg4);
    M2C_FIELD(arg1, s16 *, 0) = (s16) (temp_r4 + (s16) (temp_r9 - func_020593ec(arg0, arg2)));
    temp_r4_2                 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s8 *, 1);
    temp_r9_2                 = func_0205938c(arg0, arg3, arg4);
    M2C_FIELD(arg1, s16 *, 2) = (s16) (temp_r4_2 + (s16) (temp_r9_2 - func_0205934c(arg0, arg2)));
    M2C_FIELD(arg1, s16 *, 4) = func_02059940(arg0, arg3, arg4, arg2);
}
