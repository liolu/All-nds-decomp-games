#include "m2c.h"

M2C_UNK func_020180ac(s32, M2C_UNK);                /* extern */
M2C_UNK func_02019d04();                            /* extern */
extern M2C_UNK data_020940c4;

void func_0201808c(void) {
    func_02019d04();
    func_020180ac(M2C_FIELD(&data_020940c4, s32 *, 0x20), 0);
}
