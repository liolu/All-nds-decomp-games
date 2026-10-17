#include "m2c.h"

M2C_UNK func_02027470();                            /* extern */

void func_0202744c(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3                   = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) ((s32) ((arg1 + (1 << temp_r3)) - 1) >> temp_r3);
    func_02027470();
}
