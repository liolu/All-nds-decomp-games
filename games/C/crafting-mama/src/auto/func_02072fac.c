#include "m2c.h"

extern M2C_UNK data_020ca65c;

void *func_02072fac(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_020ca65c + (arg0 * 4));
}
