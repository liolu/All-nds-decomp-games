#include "m2c.h"

extern s32 data_02123298;

void func_02073c40(s32 arg0) {
    data_02123298 &= ~(1 << arg0);
}
