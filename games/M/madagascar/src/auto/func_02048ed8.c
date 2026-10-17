/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02048ed8(void *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 4);
    if (temp_r1 == NULL) {
        return;
    }
    M2C_FIELD(temp_r1, M2C_UNK(**)(void *, M2C_UNK), 0x24)(arg0, 1);
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        M2C_FIELD(arg0, s32 *, 0x14)  = 0xC8;
        M2C_FIELD(arg0, s32 *, 0x130) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0x64;
}
