#include "m2c.h"

M2C_UNK func_0206656c(void *);                      /* extern */

void func_020665d8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    func_0206656c(arg0 + 0xC);
}
