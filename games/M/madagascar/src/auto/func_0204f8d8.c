/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK func_0204fa24;

void func_0204f8d8(void *arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void *(**) (void *, M2C_UNK, M2C_UNK), 0)(arg0, 1, 0x1C);
    M2C_FIELD(arg0, void **, 0x1B0)   = temp_r0;
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &func_0204fa24;
    M2C_FIELD(temp_r0, s32 *, 8)      = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC)    = 0;
    if (M2C_FIELD(arg0, s32 *, 0x54) == 0) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x138);
    if (arg1 != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 4;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *), 0)(arg0);
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0xC) = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32(**)(void *, M2C_UNK, s32, s32), 8)(
        arg0, 1, M2C_FIELD(arg0, s32 *, 0x70) * M2C_FIELD(arg0, s32 *, 0x78), M2C_FIELD(temp_r0, s32 *, 0x10));
}
