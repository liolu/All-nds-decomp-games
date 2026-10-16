#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02263390;

void func_0205b1d8(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02263390 + (arg0 * 0x24))) = (s32) (u16) arg1;
}
