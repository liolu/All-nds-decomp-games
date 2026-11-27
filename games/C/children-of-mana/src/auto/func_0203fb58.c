/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02117924;
extern M2C_UNK data_02117d24;
extern M2C_UNK data_02118124;

void func_0203fb58(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 == -1) {
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_02118124 + (temp_r4 * 4))) = 0;
    *((M2C_UNK *) ((s8 *) &data_02117924 + (temp_r4 * 4))) = 0;
    *((M2C_UNK *) ((s8 *) &data_02117d24 + (temp_r4 * 4))) = 0;
    *arg0                                                  = -1;
}
