#include "m2c.h"

extern void *data_020d1d24;

s32 func_02047b40(void) {
    if (M2C_FIELD(data_020d1d24, u8 *, 0xB) == 0) {
        return 1;
    }
    return 0;
}
