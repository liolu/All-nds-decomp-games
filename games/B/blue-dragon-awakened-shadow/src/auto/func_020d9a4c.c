#include "m2c.h"

M2C_UNK func_020b7ad4();                            /* extern */

s32 func_020d9a4c(void **arg0) {
    void **temp_r0_2;
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return 0;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, void ***, 8);
    if (temp_r0_2 == NULL) {
        return 0;
    }
    if (M2C_FIELD(*temp_r0_2, s32(**)(), 0x2C)(temp_r0_2) != 0) {
        func_020b7ad4();
    }
    return 1;
}
