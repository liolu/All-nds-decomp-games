/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02045978(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_021631d8;

void func_0204c068(void) {
    M2C_FIELD(&data_021631d8, s32 *, 0)   = 0;
    M2C_FIELD(&data_021631d8, s32 *, 4)   = func_02045978(0xA, 1, 0x800, 0x555, 0x400, 8, 0x1C80);
    M2C_FIELD(&data_021631d8, s32 *, 8)   = func_02045978(0xA, 1, 0x1800, 0x333, 0x400, 8, 0x1C80);
    M2C_FIELD(&data_021631d8, s32 *, 0xC) = func_02045978(0xA, 1, 0x1800, 0x555, 0x400, 0xC, 0x1C80);
}
