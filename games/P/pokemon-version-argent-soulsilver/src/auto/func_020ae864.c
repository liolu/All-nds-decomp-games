#include "m2c.h"

M2C_UNK func_020ae8a8(s16, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern void *data_021d600c;

void func_020ae864(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s16 temp_r0;

    temp_r0                                 = M2C_FIELD(data_021d600c, s16 *, 0x2280);
    M2C_FIELD(data_021d600c, s16 *, 0x2280) = 0;
    func_020ae8a8(temp_r0, arg0, arg1, arg2, arg3);
}
