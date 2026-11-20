#include "m2c.h"

s32 func_0200254c();                                /* extern */
s32 func_020027e4();                                /* extern */
M2C_UNK func_0209082c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020b3dcc(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020b3e44(s32, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_020b3e84(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02090798(void *arg0) {
    func_0209082c(0, 0, 0x1D, 4, 0);
    func_020b3dcc(M2C_FIELD(arg0, s32 *, 0x34), func_020027e4(), 0x20, 0x18, 4);
    func_020b3e44(M2C_FIELD(arg0, s32 *, 0x34), func_0200254c(), 0, 0, 0x20, 0x18, 0xF, 0, 0x20);
    func_020b3e84(M2C_FIELD(arg0, s32 *, 0x34), 0, 0);
}
