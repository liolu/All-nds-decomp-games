#include "m2c.h"

extern s32 data_ov014_0214e55c;

s32 func_ov014_02140bd0(s32 arg0) {
    s32 temp_r2;

    temp_r2             = data_ov014_0214e55c;
    data_ov014_0214e55c = arg0;
    return temp_r2;
}
