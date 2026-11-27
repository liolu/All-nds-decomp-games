/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02126760;
extern M2C_UNK data_021267e0;

s32 func_02087ec8(s32 arg0) {
    if (arg0 < 0x40) {
        return *((M2C_UNK *) ((s8 *) &data_021267e0 + (arg0 * 4)));
    }
    return *((M2C_UNK *) ((s8 *) &data_02126760 + ((arg0 - 0x40) * 4)));
}
