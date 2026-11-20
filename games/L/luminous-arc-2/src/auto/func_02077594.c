#include "m2c.h"

s32 func_02077594(void *arg0) {
    s32 var_r1;

    if (M2C_FIELD(arg0, u16 *, 6) == 0) {
        M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 4);
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            var_r1 = 0;
        } else {
            var_r1 = M2C_FIELD(arg0, s32 *, 0xC);
        }
        M2C_FIELD(arg0, s32 *, 8) = var_r1;
    }
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) - 1);
    return M2C_FIELD(arg0, s32 *, 8);
}
