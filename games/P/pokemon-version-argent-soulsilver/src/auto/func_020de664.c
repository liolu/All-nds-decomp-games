#include "m2c.h"

extern u16 data_021e4240;

s32 func_020de664(void) {
    if (data_021e4240 != 0) {
        return 0;
    }
    return 3;
}
