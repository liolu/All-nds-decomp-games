#include "m2c.h"

M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_02053678(s32);                         /* extern */

void func_020530ec(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xBB50);
    if (temp_r4 == 0) {
        return;
    }
    func_02053678(temp_r4);
    func_0203491c(temp_r4);
}
