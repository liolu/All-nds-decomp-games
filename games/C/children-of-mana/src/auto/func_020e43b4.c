#include "m2c.h"

extern s32 data_0212e928;
extern s32 data_0212e92c;

s32 func_020e43b4(void) {
    s32 temp_ip;

    temp_ip       = data_0212e92c + 1;
    data_0212e92c = temp_ip;
    return ((temp_ip - 1) * 0x24) + data_0212e928;
}
