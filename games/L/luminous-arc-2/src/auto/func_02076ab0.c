#include "m2c.h"

M2C_UNK func_020770ac(void *);                      /* extern */

void func_02076ab0(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u16 *, 4) = (u16) (M2C_FIELD(arg1, u16 *, 4) | 2);
    if (M2C_FIELD(arg0, u8 *, 4) & 1) {
        return;
    }
    M2C_FIELD(arg1, s32 *, 0x14C) = (s32) (u8) M2C_FIELD(arg1, s32 *, 0x14C);
    func_020770ac(arg1 + 0x3C);
    M2C_FIELD(arg1, u16 *, 6) = (u16) (M2C_FIELD(arg1, u16 *, 6) & ~1);
}
