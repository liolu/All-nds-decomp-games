#include "m2c.h"

M2C_UNK func_02021258(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_02045ac0(void *arg0, M2C_UNK arg1) {
    void **temp_r0;

    func_02021258(arg1, arg0 + 0x14, 0x30);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x44);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x10)(temp_r0, arg1);
}
