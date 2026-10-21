#include "m2c.h"

s32 func_0202ede0(s16);                             /* extern */
M2C_UNK func_020309b4(s32, s16, s16, M2C_UNK, s32, s32); /* extern */
s32 func_0206f0b0(void *);                          /* extern */

void func_0206f0e4(void *arg0) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        return;
    }
    temp_r4 = func_0202ede0(M2C_FIELD(arg0, s16 *, 0x24));
    func_020309b4(temp_r4, M2C_FIELD(arg0, s16 *, 0x20), M2C_FIELD(arg0, s16 *, 0x22), 0, -0x18, func_0206f0b0(arg0));
}
