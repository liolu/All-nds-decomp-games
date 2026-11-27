#include "m2c.h"

extern u8 data_021154e4;

void func_02029964(s32 arg0) {
    data_021154e4 &= ~(1 << arg0);
}
