#include "m2c.h"

extern M2C_UNK data_02088228;

s32 func_0205bb38(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02088228 + (arg0 * 4)));
}
