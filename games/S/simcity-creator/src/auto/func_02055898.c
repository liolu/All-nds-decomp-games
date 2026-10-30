#include "m2c.h"

void func_02055898(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0)    = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 2)    = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 4)    = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 6)    = (u16) M2C_FIELD(arg1, u16 *, 6);
    M2C_FIELD(arg0, u16 *, 8)    = (u16) M2C_FIELD(arg1, u16 *, 8);
    M2C_FIELD(arg0, u8 *, 0xA)   = (u8) M2C_FIELD(arg1, u8 *, 0xA);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0x10) = (u16) M2C_FIELD(arg1, u16 *, 0x10);
}
