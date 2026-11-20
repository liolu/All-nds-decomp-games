#include "m2c.h"

extern void *data_0211d7ec;
extern s32 data_02170d20;
extern s32 data_02170d30;
extern s32 data_02170d54;
extern M2C_UNK data_02170d64;
extern M2C_UNK data_02172540;

void func_0209a810(void) {
    data_02170d54                       = M2C_FIELD(data_0211d7ec, s32 *, 4);
    data_02170d20                       = M2C_FIELD(data_0211d7ec, s32 *, 8);
    data_02170d30                       = M2C_FIELD(data_0211d7ec, s32 *, 0xC);
    M2C_FIELD(&data_02170d64, s32 *, 0) = (s32) M2C_FIELD(data_0211d7ec, s32 *, 0x10);
    M2C_FIELD(&data_02170d64, s32 *, 4) = (s32) M2C_FIELD(data_0211d7ec, s32 *, 0x14);
    M2C_FIELD(&data_02172540, s32 *, 8) = (s32) (M2C_FIELD(&data_02172540, s32 *, 8) | 2);
}
