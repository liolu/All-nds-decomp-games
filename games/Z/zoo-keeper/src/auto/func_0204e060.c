#include "m2c.h"

extern M2C_UNK data_0206d948;

s32 func_0204e060(s32 arg0) {
    return M2C_FIELD(&data_0206d948, u16 *, 0x34) & arg0;
}
