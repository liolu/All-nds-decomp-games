#include "m2c.h"

extern s32 data_020fa9a4;

s32 func_0207f700(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020fa9a4;
    data_020fa9a4 = arg0;
    return temp_r2;
}
