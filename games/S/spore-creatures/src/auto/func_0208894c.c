#include "m2c.h"

s32 *func_02085c3c(s32);                            /* extern */
s32 func_02085f7c(s32);                             /* extern */
s32 func_020888a0(M2C_UNK, M2C_UNK, u8, u16, s32, void *, s32, s32, s32); /* extern */
void *func_0208585c(s32, s32);                      /* extern */

s32 func_0208894c(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 *temp_r0_3;
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0_3 = func_02085c3c(arg2);
    if (temp_r0_3 == NULL) {
        return 0;
    }
    temp_r0_2 = func_02085f7c(*temp_r0_3);
    if (temp_r0_2 == 0) {
        return 0;
    }
    temp_r0 = func_0208585c(temp_r0_2, arg3);
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_020888a0(arg0, arg1, M2C_FIELD(temp_r0, u8 *, 9), M2C_FIELD(temp_r0, u16 *, 4),
                         (s32) M2C_FIELD(temp_r0, u8 *, 8), temp_r0, temp_r0_2, arg2, arg3);
}
