#include "m2c.h"

M2C_UNK func_02002eec(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020055c4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0202312c(s32, M2C_UNK *, s32 *, M2C_UNK, s32); /* extern */
s32 func_02091a08(s32);                             /* extern */
s32 func_02091a10(s32);                             /* extern */
s32 func_02091a28(s32);                             /* extern */
s32 func_020953d0(s32);                             /* extern */
s32 func_020953d8(s32);                             /* extern */
M2C_UNK func_0209585c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020c9ee0;
extern M2C_UNK data_020c9f04;
extern M2C_UNK data_020c9f28;
extern M2C_UNK data_020c9f4c;
extern M2C_UNK data_020c9f6c;
extern M2C_UNK data_020c9f8c;
extern M2C_UNK data_020c9fb0;
extern M2C_UNK data_020c9fd4;

void func_0203fe1c(void *arg0) {
    s32 sp4;

    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1600;
    sp4                 = func_02091a08(M2C_FIELD(arg0, s32 *, 0xC8));
    func_0202312c(M2C_FIELD(arg0, s32 *, 0xC4), &data_020c9ee0, &sp4, 0x20, 0x200);
    func_02002eec(sp4, 0, 0x200);
    sp4 = func_02091a10(M2C_FIELD(arg0, s32 *, 0xC8));
    func_0202312c(M2C_FIELD(arg0, s32 *, 0xC4), &data_020c9f04, &sp4, 0x24, 0x8000);
    sp4 = func_02091a28(M2C_FIELD(arg0, s32 *, 0xC8));
    func_0202312c(M2C_FIELD(arg0, s32 *, 0xC4), &data_020c9f28, &sp4, 0x28, 0x800);
    sp4 = func_020953d0(M2C_FIELD(arg0, s32 *, 0xCC));
    func_0202312c(M2C_FIELD(arg0, s32 *, 0xC4), &data_020c9f4c, &sp4, 0x20, 0x200);
    sp4 = func_020953d8(M2C_FIELD(arg0, s32 *, 0xCC));
    func_0202312c(M2C_FIELD(arg0, s32 *, 0xC4), &data_020c9f6c, &sp4, 0x24, 0x4000);
    func_020055c4(sp4, 0x4000);
    func_0209585c(M2C_FIELD(arg0, s32 *, 0xCC), 0x4000, 0, 0x200, 0);
    func_0202312c(M2C_FIELD(arg0, s32 *, 0xC4), &data_020c9f8c, arg0 + 0x816C, 0x28, 0x800);
    func_0202312c(M2C_FIELD(arg0, s32 *, 0xC4), &data_020c9fb0, arg0 + 0x8164, 0x24, 0x8000);
    func_0202312c(M2C_FIELD(arg0, s32 *, 0xC4), &data_020c9fd4, arg0 + 0x8168, 0x20, 0x200);
    M2C_FIELD(arg0, s32 *, 0x78) = 1;
    M2C_FIELD(arg0, s32 *, 0x7C) = 1;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 1;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0xB;
    M2C_FIELD(arg0, s32 *, 4)    = 0x1D;
}
