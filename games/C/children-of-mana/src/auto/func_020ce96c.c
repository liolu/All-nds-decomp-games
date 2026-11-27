/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209fe8c(void **);                         /* extern */

void func_020ce96c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void **temp_r0;

    if (func_0209fe8c(M2C_FIELD(arg0, void ***, 8)) != 2) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 8);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0x10)(temp_r0, arg1, arg2);
    M2C_FIELD(arg0, s8 *, 0x9D) = 0;
}
