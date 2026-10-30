#include "m2c.h"

M2C_UNK func_020014e0(M2C_UNK);                     /* extern */
M2C_UNK func_02035e18(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02035e44(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02035e70(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02035ea4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02090ba4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02090cb8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02090cf8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02090d2c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02090d6c(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02035ed8(void *arg0) {
    func_02090ba4(M2C_FIELD(arg0, s32 *, 0x269C4), 0);
    func_020014e0(0);
    func_02090cb8(M2C_FIELD(arg0, s32 *, 0x269C4), 0, 0);
    func_02090cf8(M2C_FIELD(arg0, s32 *, 0x269C4), 0, 0);
    func_02090d2c(M2C_FIELD(arg0, s32 *, 0x269C4), 0, 0);
    func_02090d6c(M2C_FIELD(arg0, s32 *, 0x269C4), 0, 0);
    M2C_FIELD((void *) 0x04001010, s32 *, 0)   = 0;
    M2C_FIELD((void *) 0x04001010, s32 *, 4)   = 0;
    M2C_FIELD((void *) 0x04001010, s32 *, 8)   = 0;
    M2C_FIELD((void *) 0x04001010, s32 *, 0xC) = 0;
    *(u16 *) 0x04001008                        = (*(u16 *) 0x04001008 & ~3) | 1;
    *(u16 *) 0x0400100A &= ~3;
    *(u16 *) 0x0400100C = (*(u16 *) 0x0400100C & ~3) | 2;
    *(u16 *) 0x0400100E = (*(u16 *) 0x0400100E & ~3) | 3;
    func_02035ea4(0, 0, 0, 3, 0);
    func_02035e70(0, 0, 2, 1, 0);
    func_02035e44(0, 0, 4, 5);
    func_02035e18(0, 0, 6, 5);
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1300;
}
