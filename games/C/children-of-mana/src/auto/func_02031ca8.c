/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02031ca8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x20) = 0x64;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x64;
    M2C_FIELD(arg0, s32 *, 0x28) = 0x64;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x64;
    M2C_FIELD(arg0, s32 *, 0x30) = 0x64;
    M2C_FIELD(arg0, s8 *, 0x34)  = 1;
    M2C_FIELD(arg0, s8 *, 0x35)  = 1;
    M2C_FIELD(arg0, s8 *, 0x36)  = 0;
    M2C_FIELD(arg0, s8 *, 0x37)  = 0;
    M2C_FIELD(arg0, s8 *, 0x38)  = 0;
    M2C_FIELD(arg0, s8 *, 0x39)  = 0;
    M2C_FIELD(arg0, s8 *, 0x3A)  = 0;
    M2C_FIELD(arg0, s8 *, 0x3B)  = 0;
    M2C_FIELD(arg0, s8 *, 0x3C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x3D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x3E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x3F)  = 0;
    M2C_FIELD(arg0, s8 *, 0x40)  = (s8) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg1, s32 *, 0x20) << 0xC);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg1, s32 *, 0x24) << 0xC);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg1, s32 *, 0x28) << 0xC);
    M2C_FIELD(arg0, s16 *, 0x50) = (s16) M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(arg0, s16 *, 0x52) = (s16) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
}
