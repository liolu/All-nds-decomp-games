#include "m2c.h"

extern M2C_UNK data_02152824;
extern M2C_UNK data_0217b599;

void func_020430b4(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    if (((u8 *) &data_0217b599)[arg4] == 0) {
        M2C_FIELD(&data_02152824, s16 *, 0x6C) = arg0;
        M2C_FIELD(&data_02152824, s16 *, 0x6E) = arg1;
        M2C_FIELD(&data_02152824, s16 *, 0x70) = arg2;
        M2C_FIELD(&data_02152824, s16 *, 0x72) = arg3;
        return;
    }
    M2C_FIELD(&data_02152824, s16 *, 0x6C) = arg0;
    M2C_FIELD(&data_02152824, s16 *, 0x6E) = arg1;
    M2C_FIELD(&data_02152824, s16 *, 0x70) = arg0;
    M2C_FIELD(&data_02152824, s16 *, 0x72) = arg1;
}
