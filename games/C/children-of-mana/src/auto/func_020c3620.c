/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_0212800c;
extern M2C_UNK data_02128010;
extern M2C_UNK data_02128810;

s32 func_020c3620(s32 arg0, s32 arg1) {
    s32 temp_r0;

    *((M2C_UNK *) ((s8 *) &data_02128010 + (data_0212800c * 4))) = arg0;
    temp_r0                                                      = data_0212800c;
    *((M2C_UNK *) ((s8 *) &data_02128810 + (data_0212800c * 4))) = arg1;
    data_0212800c += 1;
    return temp_r0;
}
