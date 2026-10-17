/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0204f044(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x1A8);
    if (M2C_FIELD(temp_r5, volatile s32 *, 0x18) == 0) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1AC), s32(**)(void *, void *), 0xC)(arg0, temp_r5 + 8) == 0) {
            return;
        }
        M2C_FIELD(temp_r5, volatile s32 *, 0x18) = 1;
        goto block_4;
    }
block_4:
    temp_r4 = M2C_FIELD(arg0, volatile u32 *, 0x13C);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1B0), M2C_UNK(**)(void *, void *, void *, u32, s32, s32, s32),
              4)(arg0, temp_r5 + 8, temp_r5 + 0x1C, temp_r4, arg1, arg2, arg3);
    if ((u32) M2C_FIELD(temp_r5, volatile u32 *, 0x1C) >= temp_r4) {
        M2C_FIELD(temp_r5, volatile s32 *, 0x18) = 0;
        M2C_FIELD(temp_r5, volatile u32 *, 0x1C) = 0U;
    }
}
