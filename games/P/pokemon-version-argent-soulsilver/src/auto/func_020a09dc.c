#include "m2c.h"

extern void *data_02110648;
extern s32 data_021d465c;
extern s32 data_021d466c;
extern s32 data_021d4690;
extern M2C_UNK data_021d46a0;
extern M2C_UNK data_021d4440;

void func_020a09dc(void) {
    data_021d4690                       = M2C_FIELD(data_02110648, s32 *, 4);
    data_021d465c                       = M2C_FIELD(data_02110648, s32 *, 8);
    data_021d466c                       = M2C_FIELD(data_02110648, s32 *, 0xC);
    M2C_FIELD(&data_021d46a0, s32 *, 0) = (s32) M2C_FIELD(data_02110648, s32 *, 0x10);
    M2C_FIELD(&data_021d46a0, s32 *, 4) = (s32) M2C_FIELD(data_02110648, s32 *, 0x14);
    M2C_FIELD(&data_021d4440, s32 *, 8) = (s32) (M2C_FIELD(&data_021d4440, s32 *, 8) | 2);
}
