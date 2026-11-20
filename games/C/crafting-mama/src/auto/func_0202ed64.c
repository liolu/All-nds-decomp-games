#include "m2c.h"

extern M2C_UNK data_020a7508;

void func_0202ed64(s32 arg0) {
    M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_020a7508 + (arg0 * 4))), s32 *, 0x10) = 1;
}
