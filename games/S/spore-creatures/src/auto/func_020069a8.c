#include "m2c.h"

extern M2C_UNK data_020d20ac;

void func_020069a8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + ((u8 *) &data_020d20ac)[*M2C_FIELD(arg0, u8 **, 0)]);
    M2C_FIELD(arg0, u8 **, 0) = (u8 *) (M2C_FIELD(arg0, u8 **, 0) + 1);
}
