#include "m2c.h"

extern M2C_UNK data_020dd880;

u16 func_02063b2c(void) {
    return M2C_FIELD(&data_020dd880, u16 *, 2);
}
