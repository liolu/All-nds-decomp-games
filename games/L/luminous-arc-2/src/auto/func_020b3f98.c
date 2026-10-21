#include "m2c.h"

M2C_UNK func_020aa020();                            /* extern */

void func_020b3f98(void **arg0) {
    void *temp_r4;

    temp_r4 = *arg0;
    if (M2C_FIELD(temp_r4, s32 *, 0x3B4) == 0) {
        return;
    }
    func_020aa020();
    M2C_FIELD(temp_r4, s32 *, 0x3B4) = 0;
}
