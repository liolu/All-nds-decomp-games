#include "m2c.h"

extern s32 data_0206ab48;

s32 func_02042aac(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_0206ab48;
    data_0206ab48 = arg0;
    return temp_r2;
}
