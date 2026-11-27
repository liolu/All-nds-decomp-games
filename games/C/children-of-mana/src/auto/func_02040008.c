/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02118d24;
extern M2C_UNK data_02119d24;

void func_02040008(void *arg0) {
    s16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0x2A);
    if ((s32) temp_r2 < 0) {
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_02118d24 + (temp_r2 * 4)))                      = 0;
    *((M2C_UNK *) ((s8 *) &data_02119d24 + (M2C_FIELD(arg0, s16 *, 0x2A) * 4))) = 0;
    M2C_FIELD(arg0, s16 *, 0x2A)                                                = -1;
}
