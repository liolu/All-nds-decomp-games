#include "m2c.h"

M2C_UNK func_020014e0(M2C_UNK);                     /* extern */
M2C_UNK func_02048588(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02049a3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02049a64(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02049ab8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02049ae4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02049b18(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02049d38(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02090ba4(s32, M2C_UNK);                /* extern */
M2C_UNK func_02090cb8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02090cf8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02090d2c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02091158(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02049b4c(void *arg0) {
    func_02090ba4(M2C_FIELD(arg0, s32 *, 0xB44), 0);
    func_020014e0(3);
    func_02090cb8(M2C_FIELD(arg0, s32 *, 0xB44), 0, 0);
    func_02090cf8(M2C_FIELD(arg0, s32 *, 0xB44), 0, 0);
    func_02090d2c(M2C_FIELD(arg0, s32 *, 0xB44), 0, 0);
    func_02091158(M2C_FIELD(arg0, s32 *, 0xB44), 0, 0, 0);
    M2C_FIELD((void *) 0x04001010, s32 *, 0) = 0;
    M2C_FIELD((void *) 0x04001010, s32 *, 4) = 0;
    M2C_FIELD((void *) 0x04001010, s32 *, 8) = 0;
    *(s32 *) 0x04000010                      = 0;
    M2C_FIELD((void *) 0x04000014, s32 *, 0) = 0;
    M2C_FIELD((void *) 0x04000014, s32 *, 4) = 0;
    M2C_FIELD((void *) 0x04000014, s32 *, 8) = 0;
    *(u16 *) 0x04001008                      = (*(u16 *) 0x04001008 & ~3) | 1;
    *(u16 *) 0x0400100A &= ~3;
    *(u16 *) 0x0400100C = (*(u16 *) 0x0400100C & ~3) | 3;
    *(u16 *) 0x0400100E = (*(u16 *) 0x0400100E & ~3) | 3;
    *(u16 *) 0x04000008 &= ~3;
    *(u16 *) 0x0400000A = (*(u16 *) 0x0400000A & ~3) | 1;
    *(u16 *) 0x0400000C = (*(u16 *) 0x0400000C & ~3) | 2;
    *(u16 *) 0x0400000E = (*(u16 *) 0x0400000E & ~3) | 3;
    func_02049b18(0, 0, 0, 1, 0);
    func_02049ae4(0, 0, 4, 5, 0);
    func_02049ab8(0, 0, 2, 3);
    func_02049d38(0, 0, 2, 3);
    func_02048588(0, 0, 0x1E, 0, 0);
    func_02049a64(0, 0, 0x1C, 2);
    func_02049a3c(0, 0, 6);
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1700;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1700;
}
