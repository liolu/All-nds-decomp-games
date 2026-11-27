#include "m2c.h"

M2C_UNK func_02091450(u16, M2C_UNK);                /* extern */

void func_020914bc(void *arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0xC);
    if ((u32) temp_r0 >= 0xDU) {
        return;
    }
    func_02091450(temp_r0, 0);
    M2C_FIELD(arg0, u16 *, 0xC) = 0xDU;
}
