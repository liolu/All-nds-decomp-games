/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e0f8();                            /* extern */
M2C_UNK func_0200f2c4();                            /* extern */

void func_02078858(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 temp_r4;
    void *temp_r0;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r2 == 0) {
        return;
    }
    temp_r4 = arg1 * 0x1A8;
    temp_r0 = M2C_FIELD((temp_r2 + temp_r4), void **, 0x1A4);
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x14), s32 *, 0x14) != 0) {
        func_0200e0f8();
        M2C_FIELD(M2C_FIELD(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x14) + temp_r4), void **, 0x1A4), void **, 0x14), s32 *, 0x14) =
            0;
    }
    if (M2C_FIELD(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x14) + temp_r4), void **, 0x1A4), s32 *, 0x14) != 0) {
        func_0200f2c4();
        M2C_FIELD(M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x14) + temp_r4), void **, 0x1A4), s32 *, 0x14) = 0;
    }
    if (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x14) + temp_r4), s32 *, 0x1A4) == 0) {
        return;
    }
    func_0200f2c4();
    M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x14) + temp_r4), s32 *, 0x1A4) = 0;
}
