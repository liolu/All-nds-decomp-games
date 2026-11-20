#include "m2c.h"

M2C_UNK func_02016cd0();

extern M2C_UNK data_02150880;

s32 WM_Reset(s32);

M2C_UNK MBi_CheckWmErrcode(M2C_UNK, s32);

M2C_UNK MBi_CallReset();

void func_02016eb4(s32 arg0) {
    M2C_FIELD(M2C_FIELD(&data_02150880, void **, 0xC), s32 *, 0x1320) = 1;
    func_02016cd0(arg0);
}
