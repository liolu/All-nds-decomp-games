#include "m2c.h"

void func_020ae360(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0x1F0) = arg1;
    M2C_FIELD(arg0, s8 *, 0x1F1) = arg2;
}
