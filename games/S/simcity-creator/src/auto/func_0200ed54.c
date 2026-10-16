#include "m2c.h"

extern u16 data_020d3660;

s32 func_0200ed54(void) {
    if (data_020d3660 != 0) {
        return 0;
    }
    return 3;
}
