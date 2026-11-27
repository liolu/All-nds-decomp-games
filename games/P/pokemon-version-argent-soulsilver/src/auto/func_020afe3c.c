#include "m2c.h"

M2C_UNK func_020d2600(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021d6010;
extern M2C_UNK data_021d601c;

void func_020afe3c(void) {
    if (M2C_FIELD(&data_021d6010, u8 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021d6010, u8 *, 0)     = 1U;
    M2C_FIELD(&data_021d6010, s32 *, 0x24) = 0;
    M2C_FIELD(&data_021d6010, s32 *, 8)    = 0;
    M2C_FIELD(&data_021d6010, s32 *, 4)    = 0;
    func_020d2600(&data_021d601c);
}
