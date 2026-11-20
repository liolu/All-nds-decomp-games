#include "m2c.h"

M2C_UNK func_020d1bf0(s32, M2C_UNK);                /* extern */
M2C_UNK func_020d3a38();                            /* extern */
extern M2C_UNK data_021e169c;

void func_020d1bd0(void) {
    func_020d3a38();
    func_020d1bf0(M2C_FIELD(&data_021e169c, s32 *, 0x28), 0);
}
