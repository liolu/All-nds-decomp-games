#include "m2c.h"

M2C_UNK func_02026bf4(s32);                         /* extern */

void func_02024dd0(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r2 == -1) {
        return;
    }
    func_02026bf4(M2C_FIELD((arg0 + (temp_r2 * 4)), s32 *, 4));
}
