#include "m2c.h"

extern M2C_UNK data_02031ec8;

void func_020037cc(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02031ec8 + (arg0 * 0x24))) = arg1;
}
