#include "m2c.h"

extern u16 data_020943e0;

void func_02019304(s32 arg0) {
    data_020943e0 |= (u16) (1 << arg0);
}
