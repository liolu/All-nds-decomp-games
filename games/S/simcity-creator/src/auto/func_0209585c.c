#include "m2c.h"

M2C_UNK func_02002f9c(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020030f8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020055c4(s32, M2C_UNK);                /* extern */

void func_0209585c(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_020055c4(M2C_FIELD(arg0, s32 *, 4), arg3);
    func_02002f9c(M2C_FIELD(arg0, s32 *, 4), arg4, arg3);
    func_020055c4(M2C_FIELD(arg0, s32 *, 8), arg1);
    func_020030f8(M2C_FIELD(arg0, s32 *, 8), arg2, arg1);
}
