#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021dfdfc;

void func_020c7f8c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021dfdfc + (arg0 * 0x24))) = (s32) (u16) arg1;
}
