#include "m2c.h"

s32 func_02038428();                                /* extern */
M2C_UNK func_020a2eec(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_0203a7e8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020a2eec(arg0 + 0x74, arg1, arg2, func_02038428(), 0);
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) M2C_FIELD(arg0, s32 *, 0x74);
}
