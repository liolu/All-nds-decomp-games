#include "m2c.h"

extern u8 data_02103910;

u8 func_02095e78(u8 arg0) {
    u8 temp_r2;

    temp_r2       = data_02103910;
    data_02103910 = arg0;
    return temp_r2;
}
