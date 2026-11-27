#include "m2c.h"

extern u8 data_0212e828;

u8 func_020de588(u8 arg0) {
    u8 temp_r2;

    temp_r2       = data_0212e828;
    data_0212e828 = arg0;
    return temp_r2;
}
