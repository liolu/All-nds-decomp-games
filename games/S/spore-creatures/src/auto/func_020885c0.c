#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020e69c0;

s32 func_020885c0(void) {
    return M2C_FIELD(&data_020e69c0, s32 *, 0xA0);
}
