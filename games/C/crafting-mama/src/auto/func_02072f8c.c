#include "m2c.h"

extern M2C_UNK data_020ca5ec;

void *func_02072f8c(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_020ca5ec + (arg0 * 4));
}
