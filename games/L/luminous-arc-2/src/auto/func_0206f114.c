#include "m2c.h"

M2C_UNK func_0206d3fc(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0206f4ec(s32, M2C_UNK, M2C_UNK *);     /* extern */

void func_0206f114(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u8 sp0[40];

    func_0206d3fc(sp0, arg3, 0);
    func_0206f4ec(M2C_FIELD(arg0, s32 *, 0xC) + (arg1 << 0x10), arg2, sp0);
}
