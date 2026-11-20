#include "m2c.h"

extern M2C_UNK data_020ca62c;

void *func_02072f9c(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_020ca62c + (arg0 * 4));
}
