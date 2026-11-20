#include "m2c.h"

extern s32 data_020deb30;

s32 func_0208c968(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_020deb30;
    data_020deb30 = arg0;
    return temp_r2;
}
