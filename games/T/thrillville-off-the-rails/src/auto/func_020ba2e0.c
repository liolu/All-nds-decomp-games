#include "m2c.h"

extern void **data_020ef778;

void func_020ba2e0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = M2C_FIELD(*data_020ef778, s32(**)(), 0x9C)(data_020ef778);
}
