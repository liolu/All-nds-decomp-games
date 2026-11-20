#include "m2c.h"

extern u16 data_020e663c;

void func_02067004(s32 arg0) {
    data_020e663c |= 1 << arg0;
}
