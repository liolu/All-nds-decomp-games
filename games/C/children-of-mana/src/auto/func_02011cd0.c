#include "m2c.h"

void func_02011cd0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u16 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0x18) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
    M2C_FIELD(arg0, u16 *, 0x1A) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
    M2C_FIELD(arg0, u16 *, 0xC)  = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 0xE)  = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 0x10) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 0x12) = (u16) M2C_FIELD(arg1, u16 *, 6);
}
