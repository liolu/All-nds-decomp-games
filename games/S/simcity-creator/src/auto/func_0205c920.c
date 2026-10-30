#include "m2c.h"

M2C_UNK func_0205d5c4();                            /* extern */
s32 func_0206be00(M2C_UNK, M2C_UNK);                /* extern */

void func_0205c920(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_0205d5c4();
    M2C_FIELD(arg0, s16 *, 0x26) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = func_0206be00(arg2, 0x14);
}
