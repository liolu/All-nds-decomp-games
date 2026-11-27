/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0201c220(s32 arg0, M2C_UNK arg1, void ***arg2, s32 arg3) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    if (arg3 != 0) {
        temp_r0 = *arg2;
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0x5C)(temp_r0, arg1, 0);
    } else {
        temp_r0_2 = *arg2;
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0x58)(temp_r0_2, arg1, 0);
    }
    temp_r0_3 = *arg2;
    M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK), 0x124)(temp_r0_3, 0);
}
