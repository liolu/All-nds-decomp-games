#include "m2c.h"

s32 *func_020a6274(void *, s32);                    /* extern */
M2C_UNK func_020a62dc();                            /* extern */
s32 func_020cf8ac(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_020a63a4;
extern M2C_UNK func_020a63a8;

void func_020a6288(void *arg0) {
    s32 *temp_r4;

    func_020a62dc(arg0);
    temp_r4  = func_020a6274(arg0, M2C_FIELD(arg0, s32 *, 4) - 1);
    *temp_r4 = func_020cf8ac(8, 0x10, 8, &func_020a63a4, &func_020a63a8);
}
