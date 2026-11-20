#include "m2c.h"

extern s32 data_020b0a70;

s32 func_020585a4(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020b0a70;
    data_020b0a70 = arg0;
    return temp_r2;
}
