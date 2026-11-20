#include "m2c.h"

extern s32 data_021e0930;

s32 func_020c961c(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_021e0930;
    data_021e0930 = arg0;
    return temp_r2;
}
