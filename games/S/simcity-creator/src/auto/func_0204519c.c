#include "m2c.h"

s32 func_02044420();                                /* extern */
M2C_UNK func_02044b90();                            /* extern */
s32 *func_02044dc4(void *, M2C_UNK);                /* extern */
M2C_UNK func_02044ddc(void *, M2C_UNK);             /* extern */
M2C_UNK func_02044f48(void *, M2C_UNK);             /* extern */

void func_0204519c(void *arg0) {
    M2C_UNK var_r1;
    M2C_UNK var_r1_2;

    M2C_FIELD(arg0, s32 *, 0x470) = 2;
    func_02044f48(arg0, 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x600) >= 0xC) {
        if (M2C_FIELD(arg0, s32 *, 0x45C) == 3) {
            var_r1 = 0xB;
        } else {
            var_r1 = 9;
        }
        func_02044ddc(arg0, var_r1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~7) | 1);
    if (func_02044420() & 2) {
        if (((u32) (*func_02044dc4(arg0, 1) << 0x1D) >> 0x1D) != 1) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~7) | 2);
        if (M2C_FIELD(arg0, s32 *, 0x45C) == 3) {
            var_r1_2 = 0xB;
        } else {
            var_r1_2 = 9;
        }
        func_02044ddc(arg0, var_r1_2);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) >= (s32) M2C_FIELD(arg0, s32 *, 0x484)) {
        if (M2C_FIELD(arg0, s32 *, 0x468) != 0) {
            func_02044b90();
            func_02044ddc(arg0, 0xD);
            return;
        }
        func_02044b90();
        func_02044ddc(arg0, 8);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x474) == 0) {
        return;
    }
    func_02044b90();
    func_02044ddc(arg0, 0xD);
}
