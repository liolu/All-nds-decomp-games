#include "m2c.h"

M2C_UNK func_020934a8(s32);                         /* extern */

void func_0202b21c(void *arg0) {
    s32 temp_r2;

    temp_r2                       = M2C_FIELD(arg0, s32 *, 0x568);
    M2C_FIELD(arg0, s32 *, 0x568) = 0;
    func_020934a8(temp_r2);
}
