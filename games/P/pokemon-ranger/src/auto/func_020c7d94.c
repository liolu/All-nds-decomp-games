#include "m2c.h"

extern u16 data_020f6c98;

void func_020c7d94(s32 arg0) {
    data_020f6c98 |= 1 << arg0;
}
