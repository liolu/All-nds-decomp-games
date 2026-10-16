#include "m2c.h"

extern M2C_UNK data_02091a98;

void func_0206da34(s32 arg0, s8 arg1) {
    *((u8 *) ((s8 *) &data_02091a98 + (arg0 * 0x24))) = arg1;
}
