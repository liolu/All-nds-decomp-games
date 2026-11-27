/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_021172c0;
extern M2C_UNK data_021172d0;
extern M2C_UNK data_021172d8;
extern M2C_UNK data_021172e0;
extern M2C_UNK data_021172f0;

void func_0203d0ec(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    *((M2C_UNK *) ((s8 *) &data_021172e0 + (arg0 * 4))) = arg1;
    *((M2C_UNK *) ((s8 *) &data_021172f0 + (arg0 * 4))) = arg2;
    *((M2C_UNK *) ((s8 *) &data_021172d8 + (arg0 * 4))) = arg3;
    *((M2C_UNK *) ((s8 *) &data_021172d0 + (arg0 * 4))) = arg4;
    ((s8 *) &data_021172c0)[arg0]                       = 1;
}
