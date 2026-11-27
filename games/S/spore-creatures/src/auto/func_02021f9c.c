#include "m2c.h"

M2C_UNK func_02090bf0(u16);                         /* extern */

void func_02021f9c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x22) == 0) {
        return;
    }
    func_02090bf0(M2C_FIELD(arg0, u16 *, 0x20));
    M2C_FIELD(arg0, u8 *, 0x22) = 0U;
}
