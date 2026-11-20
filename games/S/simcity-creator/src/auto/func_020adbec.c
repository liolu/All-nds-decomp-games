#include "m2c.h"

M2C_UNK func_020b0288();                            /* extern */

void func_020adbec(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, void ***, 0x94) != NULL) {
        func_020b0288();
        temp_r0 = M2C_FIELD(arg0, void ***, 0x94);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x94) = NULL;
    }
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
}
