#include "m2c.h"

extern u16 data_0208e91c;

void func_02064450(s32 arg0) {
    data_0208e91c |= 1 << arg0;
}
