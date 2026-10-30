#include "m2c.h"

s32 func_02044430();                                /* extern */
M2C_UNK func_02044b90();                            /* extern */
s32 *func_02044dc4(void *, M2C_UNK);                /* extern */
M2C_UNK func_02044ddc(void *, M2C_UNK);             /* extern */

void func_020453dc(void *arg0) {
    M2C_UNK var_r1;
    M2C_UNK var_r1_2;

    M2C_FIELD(arg0, s32 *, 0x470) = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x600) >= 0xC) {
        if (M2C_FIELD(arg0, s32 *, 0x45C) == 6) {
            var_r1 = 0xC;
        } else {
            var_r1 = 0xA;
        }
        func_02044ddc(arg0, var_r1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~7) | 1);
    if (((u32) (*func_02044dc4(arg0, 0) << 0x1D) >> 0x1D) == 2) {
        if (M2C_FIELD(arg0, s32 *, 0x45C) == 6) {
            var_r1_2 = 0xC;
        } else {
            var_r1_2 = 0xA;
        }
        func_02044ddc(arg0, var_r1_2);
        return;
    }
    if (func_02044430() != 8) {
        return;
    }
    func_02044b90();
    func_02044ddc(arg0, 8);
}
