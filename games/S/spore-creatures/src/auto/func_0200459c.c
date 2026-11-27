#include "m2c.h"

s32 *func_02004184(void *, s32);                    /* extern */
M2C_UNK func_020045f0();                            /* extern */
s32 func_020cf8ac(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_02004198;
extern M2C_UNK func_020046d0;

void func_0200459c(void *arg0) {
    s32 *temp_r4;

    func_020045f0(arg0);
    temp_r4  = func_02004184(arg0, M2C_FIELD(arg0, s32 *, 4) - 1);
    *temp_r4 = func_020cf8ac(8, 4, 8, &func_020046d0, &func_02004198);
}
