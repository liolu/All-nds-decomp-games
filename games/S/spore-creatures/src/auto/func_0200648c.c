#include "m2c.h"

M2C_UNK func_020cfa20(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_020061a8;
extern M2C_UNK func_020061c8;

void *func_0200648c(void *arg0) {
    func_020cfa20(arg0, 4, 0xC, &func_020061a8, &func_020061c8);
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
    return arg0;
}
