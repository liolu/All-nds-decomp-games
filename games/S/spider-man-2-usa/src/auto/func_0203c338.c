/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_0215f094;
extern M2C_UNK data_0215f214;

s32 func_0203c338(s32 arg0) {
    s32 temp_r1;

    if (data_0215f094 == 0) {
        return 1;
    }
    temp_r1 = arg0 * 0x1C;
    if (*((M2C_UNK *) ((s8 *) &data_0215f214 + temp_r1)) == 0) {
        return 0xA;
    }
    *((M2C_UNK *) ((s8 *) &data_0215f214 + temp_r1)) = 0;
    return 0;
}
