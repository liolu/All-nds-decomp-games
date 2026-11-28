#include "m2c.h"

M2C_UNK func_0205f8e8(void *);                      /* extern */
M2C_UNK func_0205f8fc(s32);                         /* extern */

void *func_0205eef0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = -1;
    func_0205f8fc(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s16 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    func_0205f8e8(arg0 + 0x30);
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s8 *, 0x50)  = 0;
    return arg0;
}
