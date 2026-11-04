#include "m2c.h"

extern M2C_UNK data_0217ccc8;

s32 func_0205ea1c(s32 arg0) {
    return M2C_FIELD(&data_0217ccc8, u16 *, 0x34) & arg0;
}
