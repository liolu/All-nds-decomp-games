#include "m2c.h"

extern s32 data_020da0b0;

s32 func_02031b38(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020da0b0;
    data_020da0b0 = arg0;
    return temp_r2;
}
