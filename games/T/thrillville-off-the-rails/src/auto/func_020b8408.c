#include "m2c.h"

void func_020b8408(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x418) = arg1;
    if (((u32) (M2C_FIELD(arg0, u8 *, 0x14C) << 0x1D) >> 0x1F) == 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x30)(arg0);
}
