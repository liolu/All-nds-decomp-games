#include "m2c.h"

M2C_UNK func_020a53c4();                            /* extern */

void func_020a56e0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x158) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x15C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    func_020a53c4();
}
