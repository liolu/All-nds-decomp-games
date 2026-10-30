#include "m2c.h"

M2C_UNK func_020055c4(void *, M2C_UNK);             /* extern */
M2C_UNK func_02006e64(M2C_UNK, void *, M2C_UNK);    /* extern */

void func_020227d4(void *arg0) {
    func_020055c4(arg0, 0x400);
    func_02006e64(0, arg0, 0x400);
    M2C_FIELD(arg0, s16 *, 0x40C) = 0;
}
