#include "m2c.h"

M2C_UNK func_02058d4c(s32, M2C_UNK);                /* extern */
s32 func_02093480(M2C_UNK);                         /* extern */
M2C_UNK func_ov000_020fb738(s32, s32, void *, M2C_UNK); /* extern */
M2C_UNK func_ov000_021040c4(void *);                /* extern */

void func_02053a88(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    func_02058d4c(M2C_FIELD(arg0, s32 *, 0x24), 0);
    func_ov000_021040c4(arg0 + 0xB0);
    temp_r0 = func_02093480(0x1CC);
    if (temp_r0 == 0) {
        return;
    }
    func_ov000_020fb738(temp_r0, M2C_FIELD(arg0, s32 *, 0x20) + 0x14, arg0, arg1);
}
