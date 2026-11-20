#include "engine.h"
#include "m2c.h"

extern u16 data_02034d04;

void func_02016888(s32 arg0) {
    data_02034d04 |= (u16) (1 << arg0);
}
