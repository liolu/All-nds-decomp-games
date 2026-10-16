#include "m2c.h"

extern s32 data_020da058;

void func_0205a134(s32 arg0) {
    data_020da058 &= ~(1 << arg0);
}
