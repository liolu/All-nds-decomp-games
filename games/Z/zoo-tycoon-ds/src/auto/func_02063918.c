#include "m2c.h"

extern s32 data_02182ef8;

void func_02063918(s32 arg0) {
    data_02182ef8 &= ~(1 << arg0);
}
