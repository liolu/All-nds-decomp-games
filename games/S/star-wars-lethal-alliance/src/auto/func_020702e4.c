#include "m2c.h"

extern u16 data_020e8cc0;

s32 func_020702e4(void) {
    if (data_020e8cc0 != 0) {
        return 0;
    }
    return 3;
}
