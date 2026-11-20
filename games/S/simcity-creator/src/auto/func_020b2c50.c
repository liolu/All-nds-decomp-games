#include "m2c.h"

M2C_UNK func_02006e64(M2C_UNK, void *, M2C_UNK);    /* extern */

void func_020b2c50(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xBD44) = 0;
    func_02006e64(0, arg0 + 0xBE20, 0xC0);
    func_02006e64(0, arg0 + 0xBEE0, 0xC0);
}
