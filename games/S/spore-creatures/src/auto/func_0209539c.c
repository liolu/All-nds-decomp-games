#include "m2c.h"

u8 func_020cdb7c(s32, M2C_UNK);                     /* extern */

void func_0209539c(void *arg0, u8 *arg1, M2C_UNK arg2) {
    u8 temp_r0;

    temp_r0                  = func_020cdb7c(arg1 - M2C_FIELD(arg0, s32 *, 0), arg2);
    *arg1                    = M2C_FIELD(arg0, u8 *, 4);
    M2C_FIELD(arg0, u8 *, 4) = temp_r0;
    M2C_FIELD(arg0, u8 *, 5) = (u8) (M2C_FIELD(arg0, u8 *, 5) + 1);
}
