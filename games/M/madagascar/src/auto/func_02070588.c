#include "m2c.h"

extern void *data_020ded58;

s32 func_02070588(void) {
    if (M2C_FIELD(data_020ded58, u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
