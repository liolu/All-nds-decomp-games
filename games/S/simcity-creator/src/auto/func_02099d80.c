#include "m2c.h"

void func_02099d80(void *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0x10008) = arg1;
    M2C_FIELD(arg0, s16 *, 0x1000A) = arg2;
}
