#include "m2c.h"

extern s32 data_02123cb4;

s32 func_02075484(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_02123cb4;
    data_02123cb4 = arg0;
    return temp_r2;
}
