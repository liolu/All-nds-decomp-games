#include "m2c.h"

extern u16 data_020eec30;

s32 func_0202ace0(void) {
    if (data_020eec30 != 0) {
        return 0;
    }
    return 3;
}
