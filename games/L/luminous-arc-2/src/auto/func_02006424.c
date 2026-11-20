#include "m2c.h"

extern u16 data_02147c34;

void func_02006424(s32 arg0) {
    data_02147c34 |= 1 << arg0;
}
