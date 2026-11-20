#include "m2c.h"

extern void *data_020b2260;

void func_0205b8c0(void) {
    if (data_020b2260 == NULL) {
        return;
    }
    if (M2C_FIELD(data_020b2260, s32 *, 0x1C) == 0) {
        M2C_FIELD(data_020b2260, s32 *, 0x1C) = 1;
    }
}
