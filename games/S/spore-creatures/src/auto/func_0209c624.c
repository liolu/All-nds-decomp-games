#include "m2c.h"

extern s32 data_020dffb8;

s32 func_0209c624(s32 arg0) {
    if (data_020dffb8 == 2) {
        data_020dffb8 = arg0;
        return 1;
    }
    return 0;
}
