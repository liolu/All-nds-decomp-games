#include "m2c.h"

extern void *data_020b3cf8;

s32 func_02054b20(void) {
    if (M2C_FIELD(data_020b3cf8, u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
