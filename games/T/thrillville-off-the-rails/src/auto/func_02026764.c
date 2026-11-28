#include "m2c.h"

extern M2C_UNK data_020ee2e8;

s32 func_02026764(s32 arg0) {
    return M2C_FIELD(&data_020ee2e8, u16 *, 0x34) & arg0;
}
