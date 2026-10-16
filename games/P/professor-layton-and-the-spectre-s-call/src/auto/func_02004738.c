#include "engine.h"
#include "m2c.h"

extern void *data_02032458;

void func_02004738(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_02032458, s32 *, 0x90) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
