#include "m2c.h"

extern M2C_UNK data_020e10ac;

u8 func_02068ad8(void) {
    return M2C_FIELD(&data_020e10ac, u8 *, 0x32C);
}
