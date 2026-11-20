#include "m2c.h"

s32 func_0206cfd0();                                /* extern */

s32 func_0207778c(void *arg0) {
    s32 temp_r5;

    if (M2C_FIELD(arg0, u16 *, 6) == 0) {
        M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 4);
        temp_r5                   = M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 8) = (s32) (((temp_r5 >> 0xF) * func_0206cfd0()) - (temp_r5 >> 1));
    }
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) - 1);
    return M2C_FIELD(arg0, s32 *, 8);
}
