#include "m2c.h"

s32 func_0207eea0(s32, M2C_UNK);                    /* extern */
s32 func_020c3558(void **);                         /* extern */

s32 func_02098040(void *arg0) {
    s32 temp_r0;
    void **temp_r0_2;

    temp_r0_2 = M2C_FIELD(arg0, void ***, 0xC);
    if ((temp_r0_2 == NULL) || (M2C_FIELD(*temp_r0_2, s32(**)(), 0x68)(temp_r0_2) == 0)) {
        return 1;
    }
    temp_r0 = func_020c3558(M2C_FIELD(arg0, void ***, 0xC));
    if (temp_r0 == 0) {
        return 1;
    }
    return func_0207eea0(temp_r0 + 0x378, 0);
}
