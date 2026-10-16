#include "m2c.h"

extern u16 data_020d0f94;

void func_020060d8(s32 arg0) {
    data_020d0f94 |= 1 << arg0;
}
