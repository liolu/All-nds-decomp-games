#include "m2c.h"

M2C_UNK func_0200ed5c(void *, M2C_UNK, u16);        /* extern */

void func_0200f014(void *arg0, M2C_UNK arg1) {
    u16 temp_r2;

    if (M2C_FIELD(arg0, s16 *, 0x64) == -1) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, u16 *, 0x60) & 4;
    if (temp_r2 == 0) {
        return;
    }
    func_0200ed5c(arg0, arg1, temp_r2);
}
