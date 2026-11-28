#include "m2c.h"

s32 func_02074300(s32);                             /* extern */
s32 func_020912c8(s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_0207d8b8;

void *func_0207d818(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = arg1;
    M2C_FIELD(arg0, s32 *, 0)    = func_020912c8(arg1, 0x10, 0, &func_0207d8b8, 0);
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)  = func_02074300(arg2 * 8);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    M2C_FIELD(arg0, s32 *, 0x18) = func_02074300(arg3);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    return arg0;
}
