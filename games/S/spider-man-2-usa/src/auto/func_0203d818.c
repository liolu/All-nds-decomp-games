/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0215f3d4;

s32 func_0203d818(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 4) && (*((M2C_UNK *) ((s8 *) &data_0215f3d4 + (arg0 * 0x140))) != 0)) {
        return 1;
    }
    return 0;
}
