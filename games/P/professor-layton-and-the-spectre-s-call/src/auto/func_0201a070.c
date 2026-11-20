#include "m2c.h"

extern M2C_UNK data_02036964;

s32 func_0201a070(s32 arg0) {
    return M2C_FIELD(&data_02036964, u16 *, 0x38) & arg0;
}
