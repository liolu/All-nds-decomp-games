#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020b5158(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020b5384(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_020b4e78(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x28)  = 0;
    M2C_FIELD(arg0, s8 *, 0x29)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2D)  = 0;
    M2C_FIELD(arg0, s8 *, 0xD9)  = 0;
    M2C_FIELD(arg0, s8 *, 0xD8)  = 0;
    M2C_FIELD(arg0, s8 *, 0xE4)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2F)  = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    func_02006ee8(arg0 + 8, 0, 0xA);
    func_02006ee8(arg0 + 0x1E, 0, 0xA);
    M2C_FIELD(arg0, s8 *, 0x2A) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B) = 0;
    func_020b5158(arg0, 0, 0x80, 0x100, 0x38);
    func_020b5384(arg0, 0x8F, 0x70, 0x5C, 0x10);
}
