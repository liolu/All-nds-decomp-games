#include "m2c.h"

M2C_UNK func_0209c644();                            /* extern */

void func_02030250(void *arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x34);
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r1 & ~0x1000);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r1 | 0x1000);
    func_0209c644();
}
