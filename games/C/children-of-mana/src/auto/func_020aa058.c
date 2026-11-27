#include "m2c.h"

extern M2C_UNK data_02127214;

void func_020aa058(s8 arg0, s8 arg1, s8 arg2, s8 arg3) {
    M2C_FIELD(&data_02127214, s8 *, 0x410) = arg0;
    M2C_FIELD(&data_02127214, s8 *, 0x411) = arg1;
    M2C_FIELD(&data_02127214, s8 *, 0x412) = arg2;
    M2C_FIELD(&data_02127214, s8 *, 0x413) = arg3;
}
