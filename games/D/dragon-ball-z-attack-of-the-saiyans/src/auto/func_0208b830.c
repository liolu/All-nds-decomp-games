#include "m2c.h"

extern M2C_UNK data_020de000;

void func_0208b830(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020de000 + (arg0 * 0x24))) = arg1;
}
