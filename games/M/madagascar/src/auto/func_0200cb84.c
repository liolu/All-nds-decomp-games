/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0200cb84(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = arg2;
    M2C_FIELD(arg0, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, u8 *, 0x18)  = 0U;
    M2C_FIELD(arg0, u8 *, 0x19)  = (u8) M2C_FIELD(arg0, u8 *, 0x18);
}
