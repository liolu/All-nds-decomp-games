/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0211737c;
extern M2C_UNK data_02117384;
extern M2C_UNK data_0211738c;

void func_0203e42c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    *((M2C_UNK *) ((s8 *) &data_0211738c + (arg0 * 4))) = arg1;
    *((M2C_UNK *) ((s8 *) &data_0211737c + (arg0 * 4))) = arg2;
    *((M2C_UNK *) ((s8 *) &data_02117384 + (arg0 * 4))) = arg3;
}
