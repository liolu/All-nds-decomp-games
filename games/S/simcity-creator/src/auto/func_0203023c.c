#include "m2c.h"

extern s32 data_020d9100;

s32 func_0203023c(s32 arg0) {
    if (arg0 & data_020d9100) {
        return 0;
    }
    data_020d9100 |= arg0;
    return 1;
}
