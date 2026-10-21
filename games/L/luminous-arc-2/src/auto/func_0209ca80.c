#include "m2c.h"

M2C_UNK func_0209af38(M2C_UNK, u16);                /* extern */

void func_0209ca80(M2C_UNK arg0, void *arg1) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg1, u16 *, 2);
    func_0209af38(arg0, (u16) ((u8) ((s32) temp_r1 >> 8) | ((temp_r1 << 8) & 0xFF00)));
}
