#include "m2c.h"

extern M2C_UNK data_0215b3d4;

void func_0200d2fc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg1 * M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(&data_0215b3d4, s32 *, 0x6C);
}
