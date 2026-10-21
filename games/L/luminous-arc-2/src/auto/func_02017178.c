#include "m2c.h"

extern M2C_UNK data_02150880;

s32 WM_SetMPDataToPortEx(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32);

M2C_UNK MBi_CheckWmErrcode(M2C_UNK, s32);

void func_02017178(s16 arg0) {
    M2C_FIELD(&data_02150880, s16 *, 0x26) = arg0;
}
