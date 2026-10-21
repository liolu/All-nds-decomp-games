/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02007590(void *arg0, u16 arg1, u8 arg2) {
    M2C_FIELD(arg0, u16 *, 4)    = arg1;
    M2C_FIELD(arg0, u16 *, 2)    = (u16) M2C_FIELD(arg0, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 0)    = (u16) M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD(arg0, u8 *, 8)     = arg2;
    M2C_FIELD(arg0, u8 *, 7)     = (u8) M2C_FIELD(arg0, u8 *, 8);
    M2C_FIELD(arg0, u8 *, 6)     = (u8) M2C_FIELD(arg0, u8 *, 7);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0x10);
}
