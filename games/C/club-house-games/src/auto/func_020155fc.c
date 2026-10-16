#include "engine.h"
#include "m2c.h"

extern void *data_020b8c88;

s32 func_020155fc(void) {
    return (s32) M2C_FIELD(data_020b8c88, s8 *, 8);
}
