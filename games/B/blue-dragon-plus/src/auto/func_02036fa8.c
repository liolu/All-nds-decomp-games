#include "m2c.h"

M2C_UNK func_02036fc8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02038e10();                            /* extern */
extern M2C_UNK data_0215dabc;

void func_02036fa8(void) {
    func_02038e10();
    func_02036fc8(M2C_FIELD(&data_0215dabc, s32 *, 0x28), 0);
}
