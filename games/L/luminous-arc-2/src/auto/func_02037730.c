#include "m2c.h"

extern M2C_UNK data_0216bc50;

void func_02037730(s8 arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(&data_0216bc50, s8 *, 5)   = arg0;
    M2C_FIELD(&data_0216bc50, s8 *, 6)   = arg1;
    M2C_FIELD(&data_0216bc50, s8 *, 7)   = arg2;
    M2C_FIELD(&data_0216bc50, s8 *, 8)   = arg3;
    M2C_FIELD(&data_0216bc50, s8 *, 0xA) = 0;
    M2C_FIELD(&data_0216bc50, s8 *, 9)   = 0;
}
