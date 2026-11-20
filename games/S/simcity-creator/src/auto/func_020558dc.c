#include "m2c.h"

M2C_UNK func_02034934(s32);                         /* extern */

void func_020558dc(void *arg0) {
    func_02034934(M2C_FIELD(arg0, s32 *, 0x400C));
    M2C_FIELD(arg0, s16 *, 0x4014) = 0;
}
