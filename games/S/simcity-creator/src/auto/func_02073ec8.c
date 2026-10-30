#include "m2c.h"

M2C_UNK func_02006ee8(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02073ec8(void *arg0) {
    func_02006ee8(arg0 + 0x5A5CE, 0, 0x4000);
    func_02006ee8(arg0 + 0x5E5CE, 0, 0xC8);
    M2C_FIELD(arg0, s16 *, 0x5E696) = 0;
}
