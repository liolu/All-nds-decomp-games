#include "m2c.h"

s32 func_0201c650(M2C_UNK);                         /* extern */
M2C_UNK func_020ae68c(s32, s32);                    /* extern */
M2C_UNK func_020b822c(M2C_UNK, u8);                 /* extern */
M2C_UNK func_020b8388(M2C_UNK, M2C_UNK);            /* extern */

void func_020b5914(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s8 temp_r0;
    s8 temp_r0_2;

    func_020b8388(arg1, 5);
    if (func_0201c650(arg2) & 0x20) {
        temp_r0 = M2C_FIELD(arg0, s8 *, 0x29);
        if (temp_r0 != 0) {
            M2C_FIELD(arg0, s8 *, 0x29) = (s8) (temp_r0 - 1);
            if ((s32) M2C_FIELD(arg0, s8 *, 0x29) < 1) {
                M2C_FIELD(arg0, s8 *, 0x29) = 2;
            }
        } else {
            M2C_FIELD(arg0, s8 *, 0x29) = 2;
        }
        M2C_FIELD(arg0, s8 *, 0xE4) = 0;
        return;
    }
    if (func_0201c650(arg2) & 0x10) {
        temp_r0_2 = M2C_FIELD(arg0, s8 *, 0x29);
        if (temp_r0_2 != 0) {
            M2C_FIELD(arg0, s8 *, 0x29) = (s8) (temp_r0_2 + 1);
            if ((s32) M2C_FIELD(arg0, s8 *, 0x29) > 2) {
                M2C_FIELD(arg0, s8 *, 0x29) = 1;
            }
        } else {
            M2C_FIELD(arg0, s8 *, 0x29) = 1;
        }
        M2C_FIELD(arg0, s8 *, 0xE4) = 0;
        return;
    }
    if (!(func_0201c650(arg2) & 1)) {
        return;
    }
    if ((s32) M2C_FIELD(arg0, s8 *, 0x29) <= 0) {
        return;
    }
    func_020ae68c(M2C_FIELD(arg0, s32 *, 4), 0x1003);
    func_020b822c(arg1, (u8) M2C_FIELD(arg0, s8 *, 0x29));
    M2C_FIELD(arg0, s8 *, 0x29) = 0;
}
