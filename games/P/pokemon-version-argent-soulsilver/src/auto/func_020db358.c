#include "m2c.h"

M2C_UNK func_020db370();                            /* extern */
extern M2C_UNK data_021e372c;

void func_020db358(s32 arg0) {
    M2C_FIELD(&data_021e372c, s32 *, 0x14) = arg0;
    func_020db370();
}
