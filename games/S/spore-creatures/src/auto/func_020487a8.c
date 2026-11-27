#include "m2c.h"

M2C_UNK func_02055b54(void *, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_02056658(void *, M2C_UNK, s32);            /* extern */
M2C_UNK func_020abfec(M2C_UNK, void *);             /* extern */
M2C_UNK func_020ac09c(M2C_UNK, void *);             /* extern */
M2C_UNK func_020ac0fc(M2C_UNK, void *);             /* extern */
M2C_UNK func_020ac1a4(M2C_UNK, void *);             /* extern */

s32 func_020487a8(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((arg2 == 1) && (M2C_FIELD(arg0, u8 *, 0x195) == 0)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x190) <= 0) {
            return 0;
        }
        goto block_6;
    }
block_6:
    temp_r0 = func_02056658(arg0, arg1, arg2);
    if (temp_r0 == 1) {
        if (arg2 != 0) {
            if (arg2 == 1) {
                func_020ac1a4(arg1, arg0 + 0x190);
                func_020ac0fc(arg1, arg0 + 0x195);
            }
        } else {
            func_020ac09c(arg1, arg0 + 0x190);
            func_020abfec(arg1, arg0 + 0x195);
            if (M2C_FIELD(arg0, s32 *, 0x188) == 0x1113C4D3) {
                temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x190);
                if (temp_r0_2 == 2) {
                    func_02055b54(arg0 + 0xE4, 0, 0x18B3, 0);
                } else if (temp_r0_2 == 1) {
                    func_02055b54(arg0 + 0xE4, 0, 0x18B2, 0);
                }
            }
        }
    }
    return temp_r0;
}
