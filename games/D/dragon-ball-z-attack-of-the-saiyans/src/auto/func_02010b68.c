#include "m2c.h"

extern M2C_UNK data_020c8dac;

void *func_02010b68(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_020c8dac + (arg0 << 6));
}
