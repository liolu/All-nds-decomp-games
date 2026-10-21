#include "m2c.h"

extern M2C_UNK data_020aa370;

void func_02038e14(s32 arg0) {
    *((M2C_UNK *) ((s8 *) &data_020aa370 + (arg0 * 0x14))) = 0;
}
