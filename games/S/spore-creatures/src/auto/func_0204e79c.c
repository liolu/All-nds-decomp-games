#include "m2c.h"

extern M2C_UNK data_020df0d4;

void func_0204e79c(s32 *arg0, void *arg1) {
    *arg0 = M2C_FIELD(arg1, s32 *, 0x3D4) << 0xC;
    if (M2C_FIELD(arg1, s32 *, 0x3D4) == -1) {
        *arg0 = M2C_FIELD(&data_020df0d4, s32 *, 0x28);
    }
}
