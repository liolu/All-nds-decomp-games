#include "m2c.h"

extern M2C_UNK data_021e36d0;

s32 func_020da81c(s32 arg0) {
    return M2C_FIELD(&data_021e36d0, u16 *, 0x38) & arg0;
}
