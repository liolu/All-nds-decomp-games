/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK func_02049910;

void func_02049914(void *arg0) {
    void *temp_r2;
    void *temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0x4AB67CD9) {
        M2C_FIELD(arg0, M2C_UNK **, 0) = &func_02049910;
        return;
    }
    temp_r2                         = M2C_FIELD(arg0, void **, 0x28);
    M2C_FIELD(temp_r2, u16 *, 0x1E) = (u16) (M2C_FIELD(temp_r2, u16 *, 0x1E) + 2);
    temp_r3                         = M2C_FIELD(arg0, void **, 0x28);
    if ((u32) M2C_FIELD(temp_r3, u16 *, 0x1E) > 0x1FU) {
        M2C_FIELD(temp_r3, u16 *, 0x1E) = 0x1FU;
        M2C_FIELD(arg0, M2C_UNK **, 0)  = &func_02049910;
    }
}
