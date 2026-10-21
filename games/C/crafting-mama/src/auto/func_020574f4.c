#include "m2c.h"

extern s32 data_020b0060;

void func_020574f4(s32 arg0) {
    data_020b0060 &= ~arg0;
}
