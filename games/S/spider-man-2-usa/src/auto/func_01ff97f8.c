#include "m2c.h"

void func_01ff97f8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x2D4) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x2D8) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x2DC) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
