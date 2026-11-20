#include "m2c.h"

M2C_UNK func_020030a0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020030f8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020055c4(M2C_UNK, M2C_UNK);            /* extern */

void func_020226d8(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020055c4(arg1, arg3);
    if (M2C_FIELD(arg0, s32 *, 0x408) == 1) {
        func_020030a0(arg1, arg2, arg3);
        return;
    }
    func_020030f8(arg1, arg2, arg3);
}
