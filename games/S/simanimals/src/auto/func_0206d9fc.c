#include "m2c.h"

extern M2C_UNK data_02091a94;

void func_0206d9fc(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02091a94 + (arg0 * 0x24))) = arg1;
}
