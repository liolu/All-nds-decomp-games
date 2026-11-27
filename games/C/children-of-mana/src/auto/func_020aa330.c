#include "m2c.h"

extern M2C_UNK data_02126cf8;
extern s32 data_02126d00;
extern s32 data_02126d08;

void func_020aa330(s32 arg0) {
    data_02126d08 += 1;
    data_02126d00 += *((s16 *) ((s8 *) &data_02126cf8 + (arg0 * 2)));
}
