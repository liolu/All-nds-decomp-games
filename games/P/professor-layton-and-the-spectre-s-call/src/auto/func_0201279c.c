#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020348d0;

s32 func_0201279c(void) {
    return M2C_FIELD(M2C_FIELD(&data_020348d0, void **, 0xC), s32 *, 8);
}
