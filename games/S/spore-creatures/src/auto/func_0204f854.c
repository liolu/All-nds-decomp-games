#include "m2c.h"

extern void *data_020df258;

void func_0204f854(s32 *arg0, void *arg1) {
    *arg0 = M2C_FIELD(data_020df258, s32 *, 0x44);
    if (((u32) M2C_FIELD(arg1, u32 *, 0x70) >> 4) & 1) {
        *arg0 = M2C_FIELD(data_020df258, s32 *, 0x1C);
    }
}
