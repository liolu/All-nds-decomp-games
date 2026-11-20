#include "m2c.h"

extern M2C_UNK data_020cccb4;

void func_02061784(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cccb4;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
}
