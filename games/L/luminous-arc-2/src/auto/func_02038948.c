#include "m2c.h"

extern void *data_0216bc50;

s32 func_02038948(void) {
    if (M2C_FIELD(data_0216bc50, s32 *, 0xDC) == 0) {
        return 0x06820000;
    }
    return 0x06800000;
}
