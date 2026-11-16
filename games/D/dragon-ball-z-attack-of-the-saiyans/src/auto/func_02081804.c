#include "m2c.h"

extern M2C_UNK data_020d8544;

u16 func_02081804(void) {
    return M2C_FIELD(&data_020d8544, u16 *, 0x8);
}
