#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0215c57c;

void func_0202df28(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0215c57c + (arg0 * 0x24))) = (s32) (u16) arg1;
}
