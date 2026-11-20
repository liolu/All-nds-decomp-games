#include "m2c.h"

extern M2C_UNK data_0216be68;

void func_020695ec(s16 arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(&data_0216be68, s16 *, 0x64) = arg0;
    M2C_FIELD(&data_0216be68, s16 *, 0x66) = arg1;
    M2C_FIELD(&data_0216be68, s16 *, 0x68) = arg2;
}
