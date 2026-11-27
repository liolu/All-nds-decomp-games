#include "m2c.h"

extern u16 data_021e19f0;

void func_020d33a4(s32 arg0) {
    data_021e19f0 |= 1 << arg0;
}
