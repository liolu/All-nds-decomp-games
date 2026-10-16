#include "m2c.h"

extern s32 data_020b1e24;

s32 func_02049854(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020b1e24;
    data_020b1e24 = arg0;
    return temp_r2;
}
