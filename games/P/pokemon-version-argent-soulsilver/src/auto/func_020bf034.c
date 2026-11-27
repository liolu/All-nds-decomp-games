#include "m2c.h"

extern M2C_UNK data_021da53c;

void func_020bf034(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    *((M2C_UNK *) ((s8 *) &data_021da53c + (arg0 * 4))) =
        (0x3FF & (arg1 >> 3)) | ((u32) ((arg2 >> 3) << 0x16) >> 0xC) | ((u32) ((arg3 >> 3) << 0x16) >> 2) | (arg0 << 0x1E);
}
