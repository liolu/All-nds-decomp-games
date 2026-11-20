#include "m2c.h"

extern s32 data_020b3e40;

void func_0205769c(s32 arg0) {
    data_020b3e40 &= ~(1 << arg0);
}
