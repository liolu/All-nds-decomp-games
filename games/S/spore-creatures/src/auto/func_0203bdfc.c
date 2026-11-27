#include "m2c.h"

extern M2C_UNK data_020ddb90;
extern M2C_UNK data_020ded2c;

void func_0203bdfc(void *arg0, s32 arg1, s8 arg2, void *arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ddb90;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ded2c;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg1;
    M2C_FIELD(arg0, u8 *, 0x14)    = (u8) M2C_FIELD(arg3, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0x15)    = (u8) M2C_FIELD(arg3, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x16)    = (u8) M2C_FIELD(arg3, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x17)    = (u8) M2C_FIELD(arg3, u8 *, 3);
    M2C_FIELD(arg0, s32 *, 0x18)   = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C)   = (s32) M2C_FIELD(arg3, s32 *, 8);
    M2C_FIELD(arg0, s8 *, 0x20)    = arg2;
    M2C_FIELD(arg0, s8 *, 0x21)    = 0;
    M2C_FIELD(arg0, s8 *, 0x22)    = 2;
    M2C_FIELD(arg0, s8 *, 0x23)    = 0;
}
