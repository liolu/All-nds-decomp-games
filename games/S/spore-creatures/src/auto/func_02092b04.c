#include "m2c.h"

void func_02092b04(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(arg1, u16 *, 0x12) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
    M2C_FIELD(arg1, u16 *, 0x10) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
    M2C_FIELD(arg1, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
}
