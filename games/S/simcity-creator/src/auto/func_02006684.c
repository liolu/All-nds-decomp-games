#include "m2c.h"

M2C_UNK func_020042d8(M2C_UNK);                     /* extern */
extern M2C_UNK data_020d0fb4;

void func_02006684(void) {
    if (M2C_FIELD(&data_020d0fb4, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020d0fb4, u16 *, 0)    = 1U;
    M2C_FIELD(&data_020d0fb4, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_020d0fb4, s32 *, 0x10) = 0;
    func_020042d8(4);
    M2C_FIELD(&data_020d0fb4, s32 *, 8) = 0;
    M2C_FIELD(&data_020d0fb4, s32 *, 4) = 0;
}
