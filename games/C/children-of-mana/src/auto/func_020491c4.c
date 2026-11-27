#include "m2c.h"

M2C_UNK func_02010b2c(void *, M2C_UNK);                      /* extern */

void func_020491c4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s8 *, 0x154) = 1;
    func_02010b2c(arg0 + 0x160, arg1);
}
