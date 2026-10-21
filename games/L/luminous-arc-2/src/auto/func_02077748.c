#include "m2c.h"

s32 func_0206cfd0();                                /* extern */

s32 func_02077748(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 6) == 0) {
        M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 4);
        M2C_FIELD(arg0, s32 *, 8) = (s32) (((s32) M2C_FIELD(arg0, s32 *, 0xC) >> 0x10) * func_0206cfd0());
    }
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) - 1);
    return M2C_FIELD(arg0, s32 *, 8);
}
