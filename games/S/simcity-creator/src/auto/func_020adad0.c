#include "m2c.h"

M2C_UNK func_02034934();                            /* extern */
M2C_UNK func_020b0288();                            /* extern */

void func_020adad0(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_02034934();
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    if (M2C_FIELD(arg0, void ***, 0x94) == NULL) {
        return;
    }
    func_020b0288();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x94);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 0x94) = NULL;
}
