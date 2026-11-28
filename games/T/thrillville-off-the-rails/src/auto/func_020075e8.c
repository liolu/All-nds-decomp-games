#include "m2c.h"

M2C_UNK func_020075f8();                            /* extern */

void func_020075e8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    func_020075f8();
}
