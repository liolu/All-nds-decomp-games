#include "m2c.h"

M2C_UNK func_0207ffb4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *); /* extern */
M2C_UNK func_02081d80(M2C_UNK *);                   /* extern */

void func_0200c0e4(void) {
    u8 sp10[64];

    func_0207ffb4(0, 0xC0000, 0, 0x100000, 0x1000, 0x8FFF, 0x1000, sp10);
    M2C_FIELD((void *) 0x04000440, s32 *, 0) = 0;
    func_02081d80(sp10);
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 2;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
}
