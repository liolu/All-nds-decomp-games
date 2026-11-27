/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204067c(void *, s32, s32);            /* extern */

void func_02042238(void *arg0) {
    func_0204067c(arg0 + 0x10C, M2C_FIELD(arg0, s32 *, 0x16C), M2C_FIELD(arg0, s32 *, 0x170));
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) | 2);
}
