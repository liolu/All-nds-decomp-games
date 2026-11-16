#include "m2c.h"

extern M2C_UNK data_020da584;

s32 func_02087ba4(s32 arg0) {
    return M2C_FIELD(&data_020da584, u16 *, 0x38) & arg0;
}
