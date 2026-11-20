#include "m2c.h"

extern M2C_UNK data_020ca5fc;

void *func_02072fbc(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_020ca5fc + (arg0 * 4));
}
