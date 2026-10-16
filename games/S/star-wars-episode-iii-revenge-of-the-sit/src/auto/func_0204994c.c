#include "m2c.h"

extern M2C_UNK data_020b1e2c;

s32 func_0204994c(s32 arg0) {
    return M2C_FIELD(&data_020b1e2c, u16 *, 0x34) & arg0;
}
