#include "m2c.h"

M2C_UNK func_020b133c(s8, u8);                      /* extern */

void func_02046300(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x46) = arg1;
    func_020b133c(arg1, M2C_FIELD(arg0, u8 *, 0x48));
}
