#include "m2c.h"

extern s32 data_0211734c;
extern s32 data_02117354;
extern M2C_UNK data_027e0000;

void func_0203df2c(void) {
    data_0211734c += 1;
    data_02117354                            = *(s32 *) 0x027FFC3C;
    M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) | 1);
}
