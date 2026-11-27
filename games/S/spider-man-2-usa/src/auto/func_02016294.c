/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_0215b44c;
extern M2C_UNK data_0215b45c;

void func_02016294(s32 arg0) {
    if ((s32) M2C_FIELD(&data_0215b44c, s32 *, 0x30) < 8) {
        *((M2C_UNK *) ((s8 *) &data_0215b45c + (M2C_FIELD(&data_0215b44c, s32 *, 0x30) * 4))) = arg0;
        M2C_FIELD(&data_0215b44c, s32 *, 0x30) = (s32) (M2C_FIELD(&data_0215b44c, s32 *, 0x30) + 1);
    }
}
