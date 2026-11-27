/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_021266e0;
extern M2C_UNK data_021268e0;

s32 func_02087f7c(s32 arg0) {
    if (arg0 < 0x80) {
        return *((M2C_UNK *) ((s8 *) &data_021268e0 + (arg0 * 4)));
    }
    return *((M2C_UNK *) ((s8 *) &data_021266e0 + ((arg0 - 0x80) * 4)));
}
