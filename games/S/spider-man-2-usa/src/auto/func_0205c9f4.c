#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02163334;

void func_0205c9f4(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02163334 + (arg0 * 0x1C))) = (s32) (u16) arg1;
}
