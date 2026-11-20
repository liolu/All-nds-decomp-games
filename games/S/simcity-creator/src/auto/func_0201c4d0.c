#include "m2c.h"

M2C_UNK func_0200124c();                            /* extern */
M2C_UNK func_0200563c();                            /* extern */
M2C_UNK func_02009bd0(M2C_UNK);                     /* extern */
M2C_UNK func_0203494c();                            /* extern */
M2C_UNK func_020ab48c();                            /* extern */

void func_0201c4d0(void) {
    M2C_FIELD((void *) 0x05000000, s16 *, 0)     = 0;
    M2C_FIELD((void *) 0x05000000, s16 *, 0x400) = 0;
    func_0200563c();
    func_0200124c();
    M2C_FIELD((void *) 0x04000000, s32 *, 0)      = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0) & ~0x1F00);
    M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) & ~0x1F00);
    M2C_FIELD((void *) 0x05000000, s16 *, 0)      = 0;
    *(s16 *) 0x05000400                           = 0;
    func_02009bd0(-1);
    func_0203494c();
    func_020ab48c();
}
