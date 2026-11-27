#include "m2c.h"

s32 func_02020fd0(u32 arg0, u32 arg1) {
    s32 temp_ip;
    s32 temp_r1;
    s32 temp_r3;

    temp_r3 = ((arg0 >> 5) & 0x1F) - ((arg1 >> 5) & 0x1F);
    temp_ip = (arg0 & 0x1F) - (arg1 & 0x1F);
    temp_r1 = ((arg0 >> 0xA) & 0x1F) - ((arg1 >> 0xA) & 0x1F);
    return (temp_r1 * temp_r1) + ((temp_ip * temp_ip) + (temp_r3 * temp_r3));
}
