#include "m2c.h"

void func_02056520(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) ((M2C_FIELD(arg0, s32 *, 0x70) & ~0x80000000) | (arg1 << 0x1F));
}
