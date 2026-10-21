#include "m2c.h"

M2C_UNK func_02076f2c(void *, M2C_UNK, u8);         /* extern */

void func_020770ac(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
        return;
    }
    func_02076f2c(arg0, 0, M2C_FIELD(arg0, u8 *, 0xE));
    M2C_FIELD(arg0, u8 *, 0x1C) = 7U;
}
