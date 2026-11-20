#include "m2c.h"

extern M2C_UNK data_021464c0;
extern M2C_UNK data_02146bc4;

M2C_UNK *func_020d2068(u32 arg0) {
    if (arg0 < 0x1BU) {
        return *((M2C_UNK *) ((s8 *) &data_021464c0 + (arg0 * 4)));
    }
    return &data_02146bc4;
}
