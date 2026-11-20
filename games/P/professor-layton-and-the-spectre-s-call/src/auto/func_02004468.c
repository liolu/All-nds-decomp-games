#include "m2c.h"

extern s32 data_02032458;

s32 func_02004468(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_02032458;
    data_02032458 = arg0;
    return temp_r2;
}
