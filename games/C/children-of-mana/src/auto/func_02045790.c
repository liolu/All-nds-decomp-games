#include "m2c.h"

void func_02045790(s32 arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r2;
    void *temp_r1_2;

    temp_r2                         = arg1 * 0xC;
    temp_r1                         = arg0 + 0x2F4;
    *(s8 *) (temp_r1 + temp_r2)     = 0;
    temp_r1_2                       = temp_r1 + temp_r2;
    M2C_FIELD(temp_r1_2, s8 *, 1)   = 0;
    M2C_FIELD(temp_r1_2, s8 *, 2)   = 0;
    M2C_FIELD(temp_r1_2, s8 *, 3)   = 0;
    M2C_FIELD(temp_r1_2, s8 *, 4)   = 0;
    M2C_FIELD(temp_r1_2, s8 *, 5)   = 0;
    M2C_FIELD(temp_r1_2, s8 *, 6)   = 0;
    M2C_FIELD(temp_r1_2, s8 *, 7)   = 0;
    M2C_FIELD(temp_r1_2, s8 *, 8)   = 0;
    M2C_FIELD(temp_r1_2, s8 *, 9)   = 0;
    M2C_FIELD(temp_r1_2, s8 *, 0xA) = 0;
    M2C_FIELD(temp_r1_2, s8 *, 0xB) = 0;
}