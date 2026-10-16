#include "m2c.h"

M2C_UNK func_0206d0b8();                            /* extern */

void func_0206dbe0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        return;
    }
    func_0206d0b8();
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
