/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0211758c;
extern M2C_UNK data_021175cc;
extern M2C_UNK data_0211760c;

void func_0203fb0c(s32 *arg0) {
    s32 temp_r4;

    temp_r4 = *arg0;
    if (temp_r4 == -1) {
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_0211758c + (temp_r4 * 4))) = 0;
    *((M2C_UNK *) ((s8 *) &data_021175cc + (temp_r4 * 4))) = 0;
    *((M2C_UNK *) ((s8 *) &data_0211760c + (temp_r4 * 4))) = 0;
    *arg0                                                  = -1;
}
