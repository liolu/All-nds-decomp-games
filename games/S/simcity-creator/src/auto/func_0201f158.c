#include "m2c.h"

M2C_UNK func_02045f54(s32, s32);                    /* extern */
M2C_UNK func_02045f64(s32, s32);                    /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
s32 func_020537e0();                                /* extern */

void func_0201f158(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x34E4) == 0) {
        return;
    }
    func_02053114(arg1);
    temp_r0 = func_020537e0();
    func_02045f54(temp_r0, M2C_FIELD(arg0, u8 *, 0x34A8) & 0xF);
    func_02045f64(temp_r0, ((s32) M2C_FIELD(arg0, u8 *, 0x34A8) >> 4) & 0xF);
}
