#include "m2c.h"

M2C_UNK func_020874b4(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0208bfec(s32);                         /* extern */

void func_020825fc(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0208bfec(M2C_FIELD(arg0, s32 *, 8));
    func_020874b4(M2C_FIELD(arg0, s32 *, 0x14), arg1, arg2, arg3);
}
