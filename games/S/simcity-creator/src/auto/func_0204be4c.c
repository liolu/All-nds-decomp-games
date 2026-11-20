#include "m2c.h"

M2C_UNK func_0204bfa8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204f0f4(void *);                      /* extern */
s32 func_02053814();                                /* extern */
M2C_UNK func_020af540(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov015_02171944(M2C_UNK);               /* extern */

void func_0204be4c(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_ov015_02171944(arg1);
    func_020af540(func_02053814(), 1, -0x10, 0);
    temp_r0                       = M2C_FIELD(arg0, s32 *, 0xA28) - 1;
    M2C_FIELD(arg0, s32 *, 0xA28) = temp_r0;
    if (temp_r0 > 0) {
        return;
    }
    func_0204f0f4(arg0);
    M2C_FIELD(arg0, s32 *, 0xA28) = 0x11;
    temp_r0_2                     = M2C_FIELD(arg0, s32 *, 0xA2C);
    switch (temp_r0_2) {                            /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0xA2C) = 0;
            func_0204bfa8(arg0, 1);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0xA2C) = 1;
            func_0204bfa8(arg0, 3);
            return;
        case 5:
            M2C_FIELD(arg0, s32 *, 0xA2C) = 9;
            func_0204bfa8(arg0, 0xB);
            return;
    }
}
