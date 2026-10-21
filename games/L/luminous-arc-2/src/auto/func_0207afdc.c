#include "m2c.h"

M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0207afdc(void *arg0) {
    func_020caa3c(3, 4, 0x10);
    M2C_FIELD(arg0, u8 *, 0x77C) = (u8) (M2C_FIELD(arg0, u8 *, 0x77C) + 1);
}
