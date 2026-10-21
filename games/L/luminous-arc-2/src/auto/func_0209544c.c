#include "m2c.h"

M2C_UNK func_02005888(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02170cc4;
extern M2C_UNK data_02170cd0;

void func_0209544c(void) {
    if (M2C_FIELD(&data_02170cc4, u8 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02170cc4, u8 *, 0)     = 1U;
    M2C_FIELD(&data_02170cc4, s32 *, 0x24) = 0;
    M2C_FIELD(&data_02170cc4, s32 *, 8)    = 0;
    M2C_FIELD(&data_02170cc4, s32 *, 4)    = 0;
    func_02005888(&data_02170cd0);
}
