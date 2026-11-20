#include "m2c.h"

extern s32 data_020e5b24;

s32 func_02085bb0(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020e5b24;
    data_020e5b24 = arg0;
    return temp_r2;
}
