#include "m2c.h"

M2C_UNK func_020159d8();                            /* extern */

void func_02058320(void *arg0) {
    void *temp_r1;

    func_020159d8();
    temp_r1 = M2C_FIELD(arg0, void **, 0x5C);
    if (temp_r1 == NULL) {
        return;
    }
    M2C_FIELD(temp_r1, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(temp_r1, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
}
