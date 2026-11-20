#include "m2c.h"

extern s32 data_020b493c;

s32 func_02059554(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020b493c;
    data_020b493c = arg0;
    return temp_r2;
}
