#include "m2c.h"

extern M2C_UNK data_020ca5dc;

void *func_02072f7c(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_020ca5dc + (arg0 * 4));
}
