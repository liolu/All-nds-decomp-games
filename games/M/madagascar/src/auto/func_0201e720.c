/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200d7d8();                            /* extern */
extern M2C_UNK data_020b70ac;

void func_0201e720(void *arg0) {
    s16 temp_r2;
    s16 temp_r3_2;
    s32 temp_r3;

    func_0200d7d8();
    temp_r3                       = ((s32) M2C_FIELD(arg0, s32 *, 0x150) >> 4) * 2;
    temp_r2                       = *((u16 *) ((s8 *) &data_020b70ac + ((temp_r3 + 1) * 2)));
    temp_r3_2                     = *((u16 *) ((s8 *) &data_020b70ac + (temp_r3 * 2)));
    M2C_FIELD(arg0, s32 *, 0x154) = (s32) ((s32) (temp_r2 * M2C_FIELD(arg0, s32 *, 0x14C)) >> 8);
    M2C_FIELD(arg0, s32 *, 0x158) = (s32) ((s32) (temp_r3_2 * M2C_FIELD(arg0, s32 *, 0x14C)) >> 8);
    M2C_FIELD(arg0, s32 *, 0x15C) = (s32) ((s32) ((0 - temp_r3_2) * M2C_FIELD(arg0, s32 *, 0x14C)) >> 8);
    M2C_FIELD(arg0, s32 *, 0x160) = (s32) ((s32) (temp_r2 * M2C_FIELD(arg0, s32 *, 0x14C)) >> 8);
}
