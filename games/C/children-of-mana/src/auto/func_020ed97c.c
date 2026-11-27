/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020ed97c(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, s32 *, 8) != 3) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = 2;
    temp_r0                   = M2C_FIELD(arg0, void ***, 0x10);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0xA8)(temp_r0, 0);
}
