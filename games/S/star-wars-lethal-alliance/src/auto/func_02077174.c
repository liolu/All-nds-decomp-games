#include "m2c.h"

extern s32 data_020eb2a4;

s32 func_02077174(s32 arg0) {
    s32 temp_r2;

    temp_r2  = data_020eb2a4;
    data_020eb2a4 = arg0;
    return temp_r2;
}
