#include "m2c.h"

M2C_UNK func_020937a8();                            /* extern */

void func_0209374c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 4);
    func_020937a8();
}
