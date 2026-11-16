#include "m2c.h"

M2C_UNK func_020842dc(s32, M2C_UNK);                /* extern */
M2C_UNK func_02085130();                            /* extern */
extern M2C_UNK data_020d8600;

void func_020842bc(void) {
    func_02085130();
    func_020842dc(M2C_FIELD(&data_020d8600, s32 *, 0x28), 0);
}
