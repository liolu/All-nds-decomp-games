#include "m2c.h"

extern s32 data_02091ffc;

s32 func_0206e198(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_02091ffc;
    data_02091ffc = arg0;
    return temp_r2;
}
