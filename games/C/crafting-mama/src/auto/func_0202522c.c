#include "m2c.h"

M2C_UNK func_020181e8(void *);                      /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */

void func_0202522c(void *arg0) {
    M2C_UNK (*temp_r5)(s32);
    s32 temp_r4;
    s32 temp_r6;

    temp_r5                   = M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x4EC);
    temp_r6                   = M2C_FIELD(arg0, s32 *, 0x4F0);
    temp_r4                   = func_02019d04();
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & ~0x4C);
    func_020181e8(arg0 + 0x4F4);
    func_02019d18(temp_r4);
    if (temp_r5 == NULL) {
        return;
    }
    temp_r5(temp_r6);
}
