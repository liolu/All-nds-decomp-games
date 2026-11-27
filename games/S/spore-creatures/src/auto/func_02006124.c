#include "m2c.h"

extern u8 data_020e0bb8;

u8 func_02006124(void) {
    u8 temp_r0;

    temp_r0       = data_020e0bb8;
    data_020e0bb8 = 0;
    return temp_r0;
}
