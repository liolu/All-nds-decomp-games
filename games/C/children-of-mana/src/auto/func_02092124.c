/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02092124(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x1C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 0x44)(temp_r0, 0x122);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
