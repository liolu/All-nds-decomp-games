#include "m2c.h"

M2C_UNK func_0200e0a8(s32);                         /* extern */
M2C_UNK func_02074314(s32);                         /* extern */
M2C_UNK func_0207432c(s32);                         /* extern */

void func_0205a344(void *arg0) {
    func_0200e0a8(M2C_FIELD(arg0, s32 *, 0x198));
    func_0207432c(M2C_FIELD(arg0, s32 *, 0x19C));
    func_02074314(M2C_FIELD(arg0, s32 *, 0x198));
    M2C_FIELD(arg0, s32 *, 0x198) = 0;
    M2C_FIELD(arg0, s32 *, 0x19C) = 0;
}
