#include "m2c.h"

M2C_UNK func_0205bbe8();                            /* extern */
M2C_UNK func_0205bc44();                            /* extern */

void func_02029d9c(void) {
    func_0205bbe8();
    func_0205bc44();
    M2C_FIELD((void *) 0x04000000, s32 *, 0)     = (s32) ((M2C_FIELD((void *) 0x04000000, s32 *, 0) & ~0x1F00) | 0x200);
    M2C_FIELD((void *) 0x04000000, u16 *, 0x304) = (u16) (M2C_FIELD((void *) 0x04000000, u16 *, 0x304) & ~0x8000);
    M2C_FIELD((void *) 0x05000000, s16 *, 0)     = 0;
    M2C_FIELD((void *) 0x05000000, s16 *, 0x400) = 0;
}
