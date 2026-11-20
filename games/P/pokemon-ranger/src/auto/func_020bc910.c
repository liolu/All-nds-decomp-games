#include "m2c.h"

extern s32 data_020f5050;

void func_020bc910(s32 arg0) {
    data_020f5050 &= ~(1 << arg0);
}
