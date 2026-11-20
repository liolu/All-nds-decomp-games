#include "m2c.h"

extern void *data_020d6cd8;

void func_0202dfc8(void) {
    if (M2C_FIELD(M2C_FIELD(data_020d6cd8, void **, 0), s32 *, 0x14) == 0) {
        M2C_FIELD((void *) 0x04000440, s32 *, 0) = 0;
        M2C_FIELD((void *) 0x04000440, s32 *, 8) = 1;
        M2C_FIELD((void *) 0x04000440, s32 *, 0) = 1;
    } else {
        M2C_FIELD(data_020d6cd8, s32 *, 0x10) = 0;
        M2C_FIELD(data_020d6cd8, s32 *, 0x2C) = 0;
        M2C_FIELD(data_020d6cd8, s32 *, 0x28) = 0;
    }
    data_020d6cd8 = NULL;
}
