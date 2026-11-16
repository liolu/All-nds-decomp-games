#include "m2c.h"

extern M2C_UNK data_020af054;

u16 func_02033b80(void) {
    return M2C_FIELD(&data_020af054, u16 *, 0xC);
}
