#include "m2c.h"

extern u16 data_0215de10;

void func_02038258(s32 arg0) {
    data_0215de10 |= 1 << arg0;
}
