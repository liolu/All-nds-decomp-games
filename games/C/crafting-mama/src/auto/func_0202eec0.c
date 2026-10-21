#include "m2c.h"

void *func_0205e85c(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020a7508;

void func_0202eec0(s16 arg0, s16 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_0205e85c(1, M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_020a7508 + (arg2 * 4))), s32 *, 0x1C), 3, -1, 0x1000);
    M2C_FIELD(temp_r0, s16 *, 8)   = arg0;
    M2C_FIELD(temp_r0, s16 *, 0xA) = arg1;
    M2C_FIELD(temp_r0, s16 *, 0xC) = 9;
}
