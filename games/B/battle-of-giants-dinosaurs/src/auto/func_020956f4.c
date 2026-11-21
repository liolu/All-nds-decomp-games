#include "m2c.h"

M2C_UNK func_0205aebc(void *, u32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0205b088(void *, s32);                 /* extern */

void func_020956f4(void *arg0, u32 arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    if (temp_r3 == NULL) {
        func_0205aebc(arg0, arg1, 0, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) = 0;
        return;
    }
    if (arg1 <= (u32) M2C_FIELD(temp_r3, u32 *, 8)) {
        return;
    }
    func_0205b088(arg0, arg1 - M2C_FIELD(temp_r3, s32 *, 4));
}
