/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028d28(void *, s32);                 /* extern */

void func_02042208(void *arg0) {
    func_02028d28(arg0 + 0x10, M2C_FIELD(arg0, s32 *, 0x160));
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) | 1);
}
