#include "m2c.h"

extern u16 data_020f92c8;

s32 func_020d0e2c(void) {
    if (data_020f92c8 != 0) {
        return 0;
    }
    return 3;
}
