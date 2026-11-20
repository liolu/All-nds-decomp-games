#include "m2c.h"

M2C_UNK func_020293f8(void **);                     /* extern */
void *func_02029490();                              /* extern */
s32 func_0204d494(s32);                             /* extern */
M2C_UNK func_0204d4b0();                            /* extern */
s32 func_0205f6a0();                                /* extern */
s32 func_0205f6c0(s32);                             /* extern */

void func_0204d6c4(void) {
    void *sp0;
    M2C_UNK (*temp_r1_2)(s32);
    s32 temp_r1;
    void *temp_r0;

    temp_r0 = func_02029490();
    sp0     = temp_r0;
    if (func_0204d494(M2C_FIELD(temp_r0, s32 *, 0x24)) != 0) {
        if (func_0205f6a0() != 0) {
            return;
        }
        goto block_5;
    }
    if (func_0205f6c0(M2C_FIELD(temp_r0, s32 *, 0x24)) != 0) {
        return;
    }
block_5:
    temp_r1                         = M2C_FIELD(temp_r0, s32 *, 0x20) + 1;
    M2C_FIELD(temp_r0, s32 *, 0x20) = temp_r1;
    if (temp_r1 < (s32) M2C_FIELD(temp_r0, s32 *, 0x2C)) {
        return;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x28) != 0) {
        func_0204d4b0();
    }
    temp_r1_2 = M2C_FIELD(temp_r0, M2C_UNK(**)(s32), 0x30);
    if (temp_r1_2 != NULL) {
        temp_r1_2(M2C_FIELD(temp_r0, s32 *, 0x34));
    }
    func_020293f8(&sp0);
}
