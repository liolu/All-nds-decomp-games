#include "m2c.h"

M2C_UNK func_02051354(s32);                         /* extern */

void func_0205d38c(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r2 == 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 0x14) = arg1;
        return;
    }
    func_02051354(temp_r2);
}
