#include "m2c.h"

extern M2C_UNK data_02150880;

s32 func_020172b4(void) {
    return M2C_FIELD(M2C_FIELD(&data_02150880, void **, 8), s32 *, 8);
}
