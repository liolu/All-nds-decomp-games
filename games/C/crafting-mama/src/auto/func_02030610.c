#include "m2c.h"

extern M2C_UNK data_020a8ac4;
extern M2C_UNK data_020a8ad0;

void func_02030610(s32 arg0) {
    M2C_FIELD(&data_020a8ad0, s32 *, 0) = arg0;
    M2C_FIELD(&data_020a8ad0, s32 *, 4) = 0x5D588B65;
    M2C_FIELD(&data_020a8ad0, s32 *, 8) = 0x269EC3;
    M2C_FIELD(&data_020a8ac4, s32 *, 0) = arg0;
    M2C_FIELD(&data_020a8ac4, s32 *, 4) = 0x5D588B65;
    M2C_FIELD(&data_020a8ac4, s32 *, 8) = 0x269EC3;
}
