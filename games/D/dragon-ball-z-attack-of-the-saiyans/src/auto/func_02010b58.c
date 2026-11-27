#include "m2c.h"

extern M2C_UNK data_020ca1ac;

void *func_02010b58(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_020ca1ac + (arg0 << 8));
}
