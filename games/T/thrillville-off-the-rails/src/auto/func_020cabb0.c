#include "m2c.h"

M2C_UNK func_020c739c();                            /* extern */

void func_020cabb0(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 0xA4) << 0xE) >> 0x1A) != 0x1D) {
        return;
    }
    func_020c739c(arg0);
}
