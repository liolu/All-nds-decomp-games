/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010220();                            /* extern */

void func_020d42f0(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x3C) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x10) = NULL;
    }
    func_02010220();
    M2C_FIELD(arg0, u8 *, 0x3C) = 0U;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
}
