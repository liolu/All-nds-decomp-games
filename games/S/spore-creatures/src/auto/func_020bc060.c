#include "m2c.h"

extern M2C_UNK data_020f3990;

s32 func_020bc060(s32 arg0) {
    return M2C_FIELD(&data_020f3990, u16 *, 0x38) & arg0;
}
