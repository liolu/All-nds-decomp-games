/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_021151b8;
extern M2C_UNK data_021151f0;

s32 func_0201ea68(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        return *((M2C_UNK *) ((s8 *) &data_021151b8 + (arg0 * 4)));
    }
    return *((M2C_UNK *) ((s8 *) &data_021151f0 + (arg0 * 4)));
}
