#include "m2c.h"

void func_020ade44(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x10) != 0) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x2E) = 0x15;
    M2C_FIELD(arg0, s16 *, 0x14) = 0x14;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0x80;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0x60;
    M2C_FIELD(arg0, u16 *, 0x10) = 4U;
}
