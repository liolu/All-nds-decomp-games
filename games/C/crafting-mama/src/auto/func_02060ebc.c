#include "m2c.h"

extern M2C_UNK data_0208eba8;

void *func_02060ebc(s32 arg0) {
    return (M2C_UNK *) ((s8 *) &data_0208eba8 + (arg0 * 8));
}
