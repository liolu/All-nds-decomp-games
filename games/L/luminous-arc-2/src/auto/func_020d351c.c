#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02185160;

s32 func_020d351c(void) {
    return M2C_FIELD(&data_02185160, s32 *, 0x14);
}
