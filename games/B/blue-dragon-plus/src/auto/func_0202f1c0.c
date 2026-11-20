#include "m2c.h"

extern s32 data_0215cb50;

s32 func_0202f1c0(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_0215cb50;
    data_0215cb50 = arg0;
    return temp_r2;
}
