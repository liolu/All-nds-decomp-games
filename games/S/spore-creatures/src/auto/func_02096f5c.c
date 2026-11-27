#include "m2c.h"

M2C_UNK func_020939c4(u16, u8);                     /* extern */

void func_02096f5c(void *arg0) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(arg0, volatile s32 *, 0x28) << 0x16) >> 0x1E;
    if ((temp_r0 != 1) && (temp_r0 != 3)) {
        return;
    }
    func_020939c4((u16) ((u32) (M2C_FIELD(arg0, volatile s32 *, 0x28) * 4) >> 0x1B), M2C_FIELD(arg0, volatile u8 *, 0x6C));
    M2C_FIELD(arg0, volatile s32 *, 0x28) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x28) & ~0x300);
}
