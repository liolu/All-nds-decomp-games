/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207ae1c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207ae5c(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0207ae9c(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_020a0960(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0207ae9c(M2C_FIELD(arg0, s32 *, 0xB8), arg1, 0, 0);
    func_0207ae5c(M2C_FIELD(arg0, s32 *, 0xB8), arg2, 0, 0);
    func_0207ae1c(M2C_FIELD(arg0, s32 *, 0xB8), arg3, 0);
}
