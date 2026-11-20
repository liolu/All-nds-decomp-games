#include "m2c.h"

M2C_UNK func_020b465c(M2C_UNK);                     /* extern */
extern M2C_UNK data_020f1cc4;

void func_020b6b74(void) {
    if (M2C_FIELD(&data_020f1cc4, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020f1cc4, u16 *, 0)    = 1U;
    M2C_FIELD(&data_020f1cc4, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_020f1cc4, s32 *, 0x10) = 0;
    func_020b465c(4);
    M2C_FIELD(&data_020f1cc4, s32 *, 8) = 0;
    M2C_FIELD(&data_020f1cc4, s32 *, 4) = 0;
}
