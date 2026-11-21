#include "m2c.h"

M2C_UNK func_0209a840(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0209a808(s32 *arg0) {
    if (*arg0 & 1) {
        return;
    }
    func_0209a840(((s8 *) arg0 + 0x60), 0, 0x16);
    *arg0 |= 0x8001;
}
