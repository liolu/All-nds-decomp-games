#include "m2c.h"

M2C_UNK func_0204d8f0(void *);                      /* extern */
M2C_UNK func_020535b4();                            /* extern */
M2C_UNK func_02066f6c(M2C_UNK, M2C_UNK);            /* extern */

void func_020541c4(void *arg0) {
    func_020535b4();
    M2C_FIELD(arg0, s32 *, 0x19C) = 0;
    func_02066f6c(0x28, 0x28);
    func_0204d8f0(arg0);
}
