#include "m2c.h"

extern M2C_UNK data_020d2c50;

s32 func_0200bbe4(s32 arg0) {
    return M2C_FIELD(&data_020d2c50, u16 *, 0x38) & arg0;
}
