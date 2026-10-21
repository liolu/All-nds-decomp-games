#include "m2c.h"

extern s32 data_020f5a6c;

s32 func_020be190(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020f5a6c;
    data_020f5a6c = arg0;
    return temp_r2;
}
