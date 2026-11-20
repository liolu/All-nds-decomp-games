/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0204f888(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x1AC);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x148) > 1) {
        M2C_FIELD(temp_r3, s32 *, 0x1C) = 1;
    } else if ((u32) M2C_FIELD(arg0, u32 *, 0x94) < (u32) (M2C_FIELD(arg0, s32 *, 0x140) - 1)) {
        M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x14C), s32 *, 0xC);
    } else {
        M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x14C), s32 *, 0x48);
    }
    M2C_FIELD(temp_r3, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x18) = 0;
}
