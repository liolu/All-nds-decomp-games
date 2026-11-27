/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d99a0(void *, s32, s32);            /* extern */
M2C_UNK func_020d9a6c(void *, s32, s32);            /* extern */

void func_020d9cd0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
    func_020d99a0(arg0, arg1, M2C_FIELD(arg0, s32 *, 4));
    func_020d9a6c(arg0, arg1, M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
