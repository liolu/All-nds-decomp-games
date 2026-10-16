#include "m2c.h"

M2C_UNK func_02004bf0(s32, M2C_UNK);                /* extern */
M2C_UNK func_020066e0();                            /* extern */
extern M2C_UNK data_020d0c40;

void func_02004bd0(void) {
    func_020066e0();
    func_02004bf0(M2C_FIELD(&data_020d0c40, s32 *, 0x28), 0);
}
