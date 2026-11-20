#include "m2c.h"

extern M2C_UNK data_020cfaa0;

void func_020ac4e8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cfaa0;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 0x28)   = -1;
}
