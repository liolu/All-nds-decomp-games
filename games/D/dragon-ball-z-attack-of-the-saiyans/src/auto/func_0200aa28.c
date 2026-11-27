#include "m2c.h"

M2C_UNK func_02081d80(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020ad814;

void func_0200aa28(void) {
    M2C_FIELD((void *) 0x04000440, s32 *, 0) = 0;
    func_02081d80(&data_020ad814);
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 3;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 2;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
}
