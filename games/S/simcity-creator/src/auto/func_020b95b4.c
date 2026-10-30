#include "m2c.h"

M2C_UNK func_02005bc4(M2C_UNK, M2C_UNK, s32);       /* extern */

void func_020b95b4(void *arg0) {
    void **temp_r0;

    func_02005bc4(0, -1, M2C_FIELD(arg0, s32 *, 0));
    func_02005bc4(0, -1, M2C_FIELD(arg0, s32 *, 4));
    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
}
