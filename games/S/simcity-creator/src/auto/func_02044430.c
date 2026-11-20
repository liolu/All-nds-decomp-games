#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020dafa0;

s32 func_02044430(void) {
    return M2C_FIELD(&data_020dafa0, s32 *, 0x38);
}
