#include "m2c.h"

void *func_020291d0(M2C_UNK *, s32);                /* extern */
extern M2C_UNK func_0202f564;
extern M2C_UNK func_0202f568;

void func_0202f510(void) {
    M2C_FIELD(func_020291d0(&func_0202f564, 0x1015), M2C_UNK **, 0x14) = &func_0202f568;
}
