#include "m2c.h"

M2C_UNK func_02048300();                            /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern u8 data_02158048;

void func_0203a498(void) {
    func_02048300();
    func_020caa3c(3, 3, 4);
    func_0206c4b4(5, 0x15, 0x7F, 0, 0x40, 0x100);
    data_02158048 += 1;
}
