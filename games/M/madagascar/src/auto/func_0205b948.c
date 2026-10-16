#include "m2c.h"

extern s32 data_020da970;

s32 func_0205b948(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020da970;
    data_020da970 = arg0;
    return temp_r2;
}
