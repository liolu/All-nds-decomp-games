#include "m2c.h"

M2C_UNK func_02055f34();                            /* extern */

void func_02055f8c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8)    = arg1;
    M2C_FIELD(arg0, s8 *, 0)     = 0;
    M2C_FIELD(arg0, s8 *, 1)     = 0;
    M2C_FIELD(arg0, s8 *, 2)     = 0;
    M2C_FIELD(arg0, s8 *, 3)     = 0;
    M2C_FIELD(arg0, s16 *, 4)    = 0;
    M2C_FIELD(arg0, s8 *, 0x10)  = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s8 *, 0x18)  = 0;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0x80;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0x80;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_02055f34(arg0);
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}
