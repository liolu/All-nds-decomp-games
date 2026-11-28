#include "m2c.h"

extern u16 data_020ec690;

void func_020239f8(s32 arg0) {
    data_020ec690 |= 1 << arg0;
}
