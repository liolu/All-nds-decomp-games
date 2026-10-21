#include "m2c.h"

M2C_UNK func_020293f8();                            /* extern */

void func_02049a90(void **arg0, s32 arg1) {
    void *temp_r3;

    if (arg0 != NULL) {
        temp_r3 = *arg0;
        if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0) != 0) && (M2C_FIELD(temp_r3, u16 *, 0x18) != 0)) {
            if (M2C_FIELD(temp_r3, s32 *, 0x1C) != arg1) {
                return;
            }
            func_020293f8(arg0);
        }
    }
}
