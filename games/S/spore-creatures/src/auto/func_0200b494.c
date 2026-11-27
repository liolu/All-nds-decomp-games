#include "m2c.h"

M2C_UNK func_0200b754(void *, M2C_UNK);             /* extern */

void func_0200b494(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x98) = (u16) ((M2C_FIELD(arg0, u16 *, 0x98) & ~1) | 1);
    func_0200b754(arg0, 0);
}
