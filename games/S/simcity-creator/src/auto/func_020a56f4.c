#include "m2c.h"

M2C_UNK func_020b12d4(s32);                         /* extern */

void func_020a56f4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20098) = arg1;
    func_020b12d4(arg1);
}
