#include "m2c.h"

M2C_UNK func_020934bc(s32);                         /* extern */

void func_02021838(void *arg0) {
    s32 temp_r2;

    temp_r2                      = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    func_020934bc(temp_r2);
}
