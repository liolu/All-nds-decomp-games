/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02078328(void **, M2C_UNK);                /* extern */

void func_0209a770(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    if (func_02078328(M2C_FIELD(arg0, void ***, 0x108), 0) == 0) {
        return;
    }
    if (func_02078328(M2C_FIELD(arg0, void ***, 0x108), 1) == 0) {
        return;
    }
    if (func_02078328(M2C_FIELD(arg0, void ***, 0x108), 2) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x108);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x20)(temp_r0, 0);
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x108);
    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK), 0x20)(temp_r0_2, 1);
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x108);
    M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK), 0x20)(temp_r0_3, 2);
}
