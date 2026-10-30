#include "m2c.h"

M2C_UNK func_0203491c(s32);                         /* extern */
M2C_UNK func_0206ba00(s32);                         /* extern */

void func_0206b230(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r4 == 0) {
        return;
    }
    func_0206ba00(temp_r4);
    func_0203491c(temp_r4);
}
