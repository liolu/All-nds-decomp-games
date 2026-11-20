#include "m2c.h"

M2C_UNK func_02008380();                            /* extern */
M2C_UNK func_0200848c(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_020d3640;
extern M2C_UNK func_0200e788;

void func_0200e75c(void) {
    func_02008380();
    func_0200848c(0xE, &func_0200e788);
    M2C_FIELD(&data_020d3640, s32 *, 4) = 0;
}
