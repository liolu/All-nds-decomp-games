#include "m2c.h"

extern M2C_UNK data_020f4598;

s32 func_020666fc(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020f4598 + (arg0 * 0x24)));
}
