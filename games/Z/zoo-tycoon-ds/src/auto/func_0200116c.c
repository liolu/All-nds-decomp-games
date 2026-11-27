#include "m2c.h"

extern M2C_UNK data_020ce19c;

void func_0200116c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020ce19c + (arg0 * 4))) = arg1;
}
