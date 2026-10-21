/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020651f8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0)    = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 8);
}
