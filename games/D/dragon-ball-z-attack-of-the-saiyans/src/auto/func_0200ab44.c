#include "m2c.h"

extern M2C_UNK data_020ad80c;

u32 func_0200ab44(s32 arg0, s16 arg1, s16 arg2, s16 arg3) {
    void *temp_lr;

    temp_lr                                             = *((M2C_UNK *) ((s8 *) &data_020ad80c + (arg0 * 4)));
    M2C_FIELD(temp_lr, s16 *, 0)                        = arg1;
    M2C_FIELD(temp_lr, s16 *, 2)                        = arg2;
    M2C_FIELD(temp_lr, s16 *, 4)                        = arg3;
    *((M2C_UNK *) ((s8 *) &data_020ad80c + (arg0 * 4))) = temp_lr + 8;
    return (u32) ((s32) temp_lr & 0x3FF) >> 3;
}
