/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02078328(void **, M2C_UNK);                /* extern */

void func_0209f9cc(void *arg0) {
    void **temp_r0;

    if (func_02078328(M2C_FIELD(arg0, void ***, 0x104), 0) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x104);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x20)(temp_r0, 0);
}
