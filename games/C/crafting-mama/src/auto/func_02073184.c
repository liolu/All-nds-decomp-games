#include "m2c.h"

extern M2C_UNK data_020ca688;

void *func_02073184(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_020ca688 + (arg0 * 0x10));
}
