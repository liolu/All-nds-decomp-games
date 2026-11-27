#include "m2c.h"

M2C_UNK func_01ff8000();                            /* extern */
void *func_01ff80bc();                              /* extern */
M2C_UNK func_020575c8(void *, M2C_UNK);             /* extern */
s32 func_ov003_0214ba34();                          /* extern */

void func_02031720(void *arg0) {
    void *temp_r0;
    void *temp_r1;

    if (M2C_FIELD(arg0, u16 *, 0x12E) != 0) {
        return;
    }
    func_01ff8000();
    if (func_ov003_0214ba34() != 0) {
        return;
    }
    if (((u32) M2C_FIELD(func_01ff80bc(), u32 *, 0x120) >> 4) & 1) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0x38);
    if ((s32) M2C_FIELD(temp_r1, s32 *, 8) <= 3) {
        return;
    }
    temp_r0 = M2C_FIELD(M2C_FIELD(temp_r1, void **, 4), void **, 0xC);
    if ((M2C_FIELD(temp_r0, u8 *, 0x3D) != 0) && (M2C_FIELD(temp_r0, s32 *, 0x24) != 1)) {
        if (M2C_FIELD(temp_r0, u8 *, 0x39) != 0) {
            return;
        }
        func_020575c8(temp_r0, 1);
    }
}
