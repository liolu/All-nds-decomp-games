#include "m2c.h"

M2C_UNK func_0207e9a4(s32);                         /* extern */
M2C_UNK func_0207eca0(void *, s32);                 /* extern */

void func_0207ec74(void *arg0) {
    func_0207e9a4(M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    func_0207eca0(arg0, M2C_FIELD(arg0, s32 *, 0x1C));
}
