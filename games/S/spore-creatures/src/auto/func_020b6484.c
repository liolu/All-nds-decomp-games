#include "m2c.h"

extern u16 data_020f1ca4;

void func_020b6484(s32 arg0) {
    data_020f1ca4 |= 1 << arg0;
}
