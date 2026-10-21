#include "m2c.h"

extern M2C_UNK data_020f8948;

s32 func_020cd130(s32 arg0) {
    return M2C_FIELD(&data_020f8948, u16 *, 0x34) & arg0;
}
