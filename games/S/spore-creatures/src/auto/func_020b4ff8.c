#include "m2c.h"

M2C_UNK func_020b5018(s32, M2C_UNK);                /* extern */
M2C_UNK func_020b6bd0();                            /* extern */
extern M2C_UNK data_020f1950;

void func_020b4ff8(void) {
    func_020b6bd0();
    func_020b5018(M2C_FIELD(&data_020f1950, s32 *, 0x28), 0);
}
