/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02118524;
extern M2C_UNK data_02119524;

void func_0204009c(void *arg0) {
    s16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0x28);
    if ((s32) temp_r2 < 0) {
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_02118524 + (temp_r2 * 4)))                      = 0;
    *((M2C_UNK *) ((s8 *) &data_02119524 + (M2C_FIELD(arg0, s16 *, 0x28) * 4))) = 0;
    M2C_FIELD(arg0, s16 *, 0x28)                                                = -1;
}
