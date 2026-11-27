/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02128010;
extern M2C_UNK data_02128810;

void func_020c35f0(s32 *arg0) {
    *((M2C_UNK *) ((s8 *) &data_02128010 + (*arg0 * 4))) = 0;
    *((M2C_UNK *) ((s8 *) &data_02128810 + (*arg0 * 4))) = 0;
    *arg0                                                = -1;
}
