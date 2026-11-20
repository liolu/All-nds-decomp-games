#include "m2c.h"

extern M2C_UNK data_020ca580;
extern M2C_UNK data_020ca980;

M2C_UNK *func_02043334(u32 arg0) {
    if (arg0 < 0x1BU) {
        return *((M2C_UNK *) ((s8 *) &data_020ca580 + (arg0 * 4)));
    }
    return &data_020ca980;
}
