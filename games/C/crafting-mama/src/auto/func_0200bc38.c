#include "m2c.h"

M2C_UNK func_0200bb68(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0200bc38(s32 arg0, void *arg1, s32 arg2, u32 *arg3) {
    u32 temp_lr;
    u32 temp_r0_2;
    void *temp_r0;

    temp_r0   = M2C_FIELD(arg1, void **, 4);
    temp_lr   = *arg3;
    temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 8) - M2C_FIELD(temp_r0, s32 *, 0xC);
    if (temp_lr > temp_r0_2) {
        *arg3 = temp_r0_2;
    }
    M2C_FIELD(arg1, u32 *, 0x34) = temp_lr;
    M2C_FIELD(arg1, s32 *, 0x30) = arg2;
    M2C_FIELD(arg1, u32 *, 0x38) = (u32) *arg3;
    func_0200bb68(arg1, 0, 0);
}
