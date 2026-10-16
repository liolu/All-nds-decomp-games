#include "m2c.h"

extern s32 data_02263e80;

s32 func_0205bf9c(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_02263e80;
    data_02263e80 = arg0;
    return temp_r2;
}
