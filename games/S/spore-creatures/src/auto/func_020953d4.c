#include "m2c.h"

M2C_UNK func_02095b64(void *);                      /* extern */

void *func_020953d4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s8 *, 4)     = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_02095b64(arg0 + 8);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}
