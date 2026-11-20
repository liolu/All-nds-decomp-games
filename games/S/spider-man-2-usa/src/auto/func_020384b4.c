/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204d8f4(M2C_UNK);

void func_020384b4(s32 arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        return;
    }
    if (func_0204d8f4(arg0) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x24);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 0x20)(temp_r0, M2C_FIELD(arg0, s32 *, 0x28));
}
