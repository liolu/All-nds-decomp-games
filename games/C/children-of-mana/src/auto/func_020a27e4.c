/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020a27e4(void *arg0, s32 arg1) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x18);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32, s32), 0x24)(temp_r0, arg1, arg1 + 4);
}
