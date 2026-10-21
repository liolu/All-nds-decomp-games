#include "m2c.h"

M2C_UNK func_02093eb8(s16, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern void *data_02170cc0;

void func_02093e74(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s16 temp_r0;

    temp_r0                                 = M2C_FIELD(data_02170cc0, s16 *, 0x2280);
    M2C_FIELD(data_02170cc0, s16 *, 0x2280) = 0;
    func_02093eb8(temp_r0, arg0, arg1, arg2, arg3);
}
