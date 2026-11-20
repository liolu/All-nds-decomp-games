#include "m2c.h"

M2C_UNK func_02083ce8();                            /* extern */

void func_020a4040(void *arg0) {
    func_02083ce8();
    M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
}
