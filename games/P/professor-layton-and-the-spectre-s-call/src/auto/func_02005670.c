#include "m2c.h"

M2C_UNK func_0201705c(void *, M2C_UNK, M2C_UNK, void (*)(void *), void *); /* extern */
M2C_UNK func_020177ec(void *, M2C_UNK);             /* extern */

void func_02005670(void *arg0) {
    if (M2C_FIELD(arg0, s32(**)(s32), 0x34)(M2C_FIELD(arg0, s32 *, 0x38)) != 0) {
        func_020177ec(arg0, 1);
        return;
    }
    func_0201705c(arg0 + 0xC, 0xC0, 0x107, func_02005670, arg0);
}
