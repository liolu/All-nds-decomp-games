/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020983ac(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_0209fe8c(void **);                         /* extern */

void func_020a816c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void **temp_r0;

    if (func_0209fe8c(M2C_FIELD(arg0, void ***, 0x134)) != 1) {
        temp_r0 = M2C_FIELD(arg0, void ***, 0x134);
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0x10)(temp_r0, arg1, arg2);
    }
    func_020983ac(arg0, arg1, arg2);
}
