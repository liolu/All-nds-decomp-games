#include "m2c.h"

extern M2C_UNK data_0217032c;

void func_02083aac(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0217032c, s32 *, 4) = arg0;
    M2C_FIELD(&data_0217032c, s32 *, 0) = arg1;
}
