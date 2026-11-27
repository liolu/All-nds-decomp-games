/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_0215d704;
extern M2C_UNK data_0215d714;

void func_02038bc4(s32 arg0) {
    if ((s32) M2C_FIELD(&data_0215d704, s32 *, 0x30) < 8) {
        *((M2C_UNK *) ((s8 *) &data_0215d714 + (M2C_FIELD(&data_0215d704, s32 *, 0x30) * 4))) = arg0;
        M2C_FIELD(&data_0215d704, s32 *, 0x30) = (s32) (M2C_FIELD(&data_0215d704, s32 *, 0x30) + 1);
    }
}
