#include "m2c.h"

void func_02033cc8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0x16C) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 0x16E) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, u16 *, 0x170) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 0x172) = (u16) M2C_FIELD(arg1, u16 *, 6);
}
