#include "m2c.h"

extern M2C_UNK data_020e82f4;

s32 func_0206c6b4(s32 arg0) {
    return M2C_FIELD(&data_020e82f4, u16 *, 0x34) & arg0;
}
