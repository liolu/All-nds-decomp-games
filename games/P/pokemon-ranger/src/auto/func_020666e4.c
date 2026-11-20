#include "m2c.h"

extern M2C_UNK data_020f4598;

void func_020666e4(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020f4598 + (arg0 * 0x24))) = arg1;
}
