#include "m2c.h"

extern M2C_UNK data_02096044;

s32 func_020204d4(s32 arg0) {
    return M2C_FIELD(&data_02096044, u16 *, 0x38) & arg0;
}
