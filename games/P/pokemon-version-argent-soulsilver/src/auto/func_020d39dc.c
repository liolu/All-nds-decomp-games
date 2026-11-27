#include "m2c.h"

M2C_UNK func_020d1204(M2C_UNK);                     /* extern */
extern M2C_UNK data_021e1a10;

void func_020d39dc(void) {
    if (M2C_FIELD(&data_021e1a10, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021e1a10, u16 *, 0)    = 1U;
    M2C_FIELD(&data_021e1a10, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_021e1a10, s32 *, 0x10) = 0;
    func_020d1204(4);
    M2C_FIELD(&data_021e1a10, s32 *, 8) = 0;
    M2C_FIELD(&data_021e1a10, s32 *, 4) = 0;
}
