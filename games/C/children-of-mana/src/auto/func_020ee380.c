/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020ee380(void *arg0, M2C_UNK arg1) {
    void **temp_r0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x1A) != 1) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 8);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x30)(temp_r0, 0, arg1, 1);
}
