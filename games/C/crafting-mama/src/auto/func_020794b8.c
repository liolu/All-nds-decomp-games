#include "m2c.h"

M2C_UNK func_02029434(s32, s32);                    /* extern */
M2C_UNK func_02060374(M2C_UNK, M2C_UNK);            /* extern */
extern s32 data_020cafe4;

void func_020794b8(void *arg0) {
    if (data_020cafe4 == 0) {
        return;
    }
    func_02029434(0x119, 0x1016);
    func_02060374(0xF, 0xB);
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
}
