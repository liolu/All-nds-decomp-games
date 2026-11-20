#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020d6cb0;

s32 func_0202cb6c(s32 arg0) {
    return (0x30 * arg0) + M2C_FIELD(&data_020d6cb0, s32 *, 8);
}
