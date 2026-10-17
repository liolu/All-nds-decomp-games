/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK func_0204f98c;

void func_0204fa24(void *arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x1B0);
    if (arg1 == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x54) != 0) {
            M2C_FIELD(temp_r4, M2C_UNK **, 4) = &func_0204f98c;
            if (M2C_FIELD(temp_r4, s32 *, 0xC) == 0) {
                M2C_FIELD(temp_r4, s32 *, 0xC) =
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32(**)(void *, s32, M2C_UNK, s32, s32),
                              0x1C)(arg0, M2C_FIELD(temp_r4, s32 *, 8), 0, M2C_FIELD(temp_r4, s32 *, 0x10), 1);
            }
        } else {
            M2C_FIELD(temp_r4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), M2C_UNK **, 4);
        }
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 4;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0)(arg0);
    }
    M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x14) = (s32) M2C_FIELD(temp_r4, s32 *, 0x18);
}
