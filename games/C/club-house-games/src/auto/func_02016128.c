#include "engine.h"
#include "m2c.h"

extern void *data_020b8c84;

s32 func_02016128(void) {
    return (s32) M2C_FIELD(data_020b8c84, s8 *, 2);
}
