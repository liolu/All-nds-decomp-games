#include "m2c.h"

M2C_UNK func_020a8348(void *, M2C_UNK);                      /* extern */
extern M2C_UNK data_020e00cc;

void *func_020a7f00(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e00cc;
    M2C_FIELD(arg0, s32 *, 4)      = 1;
    M2C_FIELD(arg0, s32 *, 8)      = 0x3C;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s16 *, 0x1C)   = 0;
    M2C_FIELD(arg0, s16 *, 0x1E)   = 0;
    M2C_FIELD(arg0, s16 *, 0x20)   = 0;
    M2C_FIELD(arg0, s16 *, 0x22)   = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    M2C_FIELD(arg0, s16 *, 0x2C)   = 0;
    M2C_FIELD(arg0, s16 *, 0x2E)   = 0;
    M2C_FIELD(arg0, s16 *, 0x30)   = 0;
    M2C_FIELD(arg0, s16 *, 0x32)   = 0;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x40)   = 0;
    M2C_FIELD(arg0, s8 *, 0x44)    = 0;
    func_020a8348(arg0 + 0x48, arg1);
    return arg0;
}
