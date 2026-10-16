#include "m2c.h"

M2C_UNK func_020631ac(s32, M2C_UNK);                /* extern */
M2C_UNK func_02064a3c();                            /* extern */
extern M2C_UNK data_0208e5c8;

void func_0206318c(void) {
    func_02064a3c();
    func_020631ac(M2C_FIELD(&data_0208e5c8, s32 *, 0x28), 0);
}
