#include "m2c.h"

extern M2C_UNK data_020df0d4;

void func_0204e7c8(s32 *arg0, void *arg1) {
    *arg0 = M2C_FIELD(arg1, s32 *, 0x3D8) << 0xC;
    if (M2C_FIELD(arg1, s32 *, 0x3D8) == -1) {
        *arg0 = M2C_FIELD(&data_020df0d4, s32 *, 0x24);
    }
}
