#include "m2c.h"

M2C_UNK func_020b442c(s32);                         /* extern */

void func_0204f0f4(void *arg0) {
    func_020b442c(M2C_FIELD(arg0, s32 *, 0xB50));
    M2C_FIELD(arg0, s32 *, 0xA38) = 0;
    M2C_FIELD(arg0, s32 *, 0xA3C) = 0;
}
