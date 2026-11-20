#include "m2c.h"

s32 func_02045f5c();                                /* extern */
s32 func_02045f6c(s32);                             /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
s32 func_020537e0();                                /* extern */

void func_0201f0fc(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0x34E4) == 0) {
        return;
    }
    func_02053114(arg1);
    temp_r4                       = func_020537e0();
    M2C_FIELD(arg0, u8 *, 0x34A8) = (u8) (func_02045f5c() & 0xF);
    M2C_FIELD(arg0, u8 *, 0x34A8) = (u8) (M2C_FIELD(arg0, u8 *, 0x34A8) | ((func_02045f6c(temp_r4) * 0x10) & 0xF0));
}
