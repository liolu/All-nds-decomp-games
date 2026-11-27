#include "m2c.h"

M2C_UNK func_020cfa20(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_0201c294;
extern M2C_UNK func_0201c2a0;

void *func_0201c24c(void *arg0) {
    func_020cfa20(arg0, 5, 4, &func_0201c294, &func_0201c2a0);
    M2C_FIELD(arg0, s8 *, 0x14) = 5;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    return arg0;
}
