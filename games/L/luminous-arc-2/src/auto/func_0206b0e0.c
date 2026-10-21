#include "m2c.h"

extern M2C_UNK data_0216be68;

void func_0206b0e0(s8 arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(&data_0216be68, s8 *, 0x90) = arg0;
    M2C_FIELD(&data_0216be68, s8 *, 0x91) = arg1;
    M2C_FIELD(&data_0216be68, s8 *, 0x92) = arg2;
}
