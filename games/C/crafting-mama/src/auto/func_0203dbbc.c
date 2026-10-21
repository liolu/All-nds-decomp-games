#include "m2c.h"

extern M2C_UNK data_020aab34;

void func_0203dbbc(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_020aab34, s32 *, 0x68) = arg0;
    M2C_FIELD(&data_020aab34, s32 *, 0x6C) = arg1;
}
