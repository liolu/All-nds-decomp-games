#include "m2c.h"

M2C_UNK _Z19SetInterruptHandlerjPKv(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK _Z24EnableSpecificInterruptsj(M2C_UNK);                     /* extern */
M2C_UNK func_020d33a4(M2C_UNK);                     /* extern */
extern M2C_UNK data_021e19f4;
extern M2C_UNK func_020d3448;

void func_020d33c0(void) {
    if (M2C_FIELD(&data_021e19f4, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021e19f4, u16 *, 0) = 1U;
    func_020d33a4(0);
    M2C_FIELD(&data_021e19f4, s32 *, 8)       = 0;
    M2C_FIELD(&data_021e19f4, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    _Z19SetInterruptHandlerjPKv(8, &func_020d3448);
    _Z24EnableSpecificInterruptsj(8);
    M2C_FIELD(&data_021e19f4, s32 *, 4) = 0;
}
