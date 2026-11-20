#include "engine.h"
#include "m2c.h"

extern void *data_020b8c24;

s32 func_02011858(void) {
    return (s32) M2C_FIELD(data_020b8c24, s8 *, 34);
}
