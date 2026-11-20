#include "m2c.h"

void func_02028944(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) ((M2C_FIELD(arg0, s32 *, 0x44) + 0x240) & 0xFFFFF);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) ((M2C_FIELD(arg0, s32 *, 0x48) + 0x1C0) & 0xFFFFF);
}
