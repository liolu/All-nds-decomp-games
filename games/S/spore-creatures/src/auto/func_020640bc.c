#include "m2c.h"

extern u8 data_020e8bed;

void func_020640bc(void *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) data_020e8bed;
}
