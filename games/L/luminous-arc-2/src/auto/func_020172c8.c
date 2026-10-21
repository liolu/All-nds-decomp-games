#include "m2c.h"

extern M2C_UNK data_02150880;

u16 func_020172c8(void) {
    return M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), u16 *, 0xC);
}
