#include "m2c.h"

extern s32 data_0217a79c;

s32 func_020564bc(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_0217a79c;
    data_0217a79c = arg0;
    return temp_r2;
}
