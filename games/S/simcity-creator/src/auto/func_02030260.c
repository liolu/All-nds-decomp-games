#include "m2c.h"

extern s32 data_020d9100;

void func_02030260(s32 arg0) {
    data_020d9100 &= ~arg0;
}
