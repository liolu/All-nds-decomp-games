#include "m2c.h"

extern s32 data_020fe318;

s32 func_02040ad0(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020fe318;
    data_020fe318 = arg0;
    return temp_r2;
}
