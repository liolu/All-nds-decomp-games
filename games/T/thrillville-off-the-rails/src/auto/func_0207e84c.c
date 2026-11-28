#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020fa530;

void func_0207e84c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020fa530 + (arg0 * 0x24))) = (s32) (u16) arg1;
}
