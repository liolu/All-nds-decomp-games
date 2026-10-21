#include "m2c.h"

extern M2C_UNK data_0216a464;

void func_020251d8(s32 arg0, s8 arg1) {
    *((u8 *) ((s8 *) &data_0216a464 + (arg0 * 0x24))) = arg1;
}
