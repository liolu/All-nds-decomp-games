/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d5bf4(void *, M2C_UNK);             /* extern */
M2C_UNK func_020d610c(void *, M2C_UNK);             /* extern */

void func_020d5e48(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_020d610c(arg0, arg2);
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    func_020d5bf4(arg0, 7);
}
