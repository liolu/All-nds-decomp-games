#include "m2c.h"

s32 func_020819e4();                                /* extern */
s32 func_02081c14();                                /* extern */

void func_020130e8(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg4;
    M2C_FIELD(arg0, s16 *, 0x10) = arg2;
    M2C_FIELD(arg0, s16 *, 0x12) = arg3;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (func_02081c14() + 0x400);
    M2C_FIELD(arg0, s32 *, 0x18) = func_020819e4();
    M2C_FIELD(arg0, s32 *, 0x24) = 0x40000000;
    M2C_FIELD(arg0, s32 *, 0x28) = 0x40000000;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x40000000;
    M2C_FIELD(arg0, s32 *, 0x30) = 0x40000000;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) ((arg2 * 8) - 0x100);
    M2C_FIELD(arg0, s16 *, 0x22) = (s16) ((arg3 * 8) - 0xC0);
}
