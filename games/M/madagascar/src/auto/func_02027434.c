#include "m2c.h"

M2C_UNK func_02027470();                            /* extern */

void func_02027434(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg1 >> M2C_FIELD(arg0, s32 *, 4));
    func_02027470();
}
