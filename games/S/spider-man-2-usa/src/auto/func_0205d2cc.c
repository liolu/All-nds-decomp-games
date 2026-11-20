#include "m2c.h"

extern s32 data_02163c00;

s32 func_0205d2cc(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_02163c00;
    data_02163c00 = arg0;
    return temp_r2;
}
