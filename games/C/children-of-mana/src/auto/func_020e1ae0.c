/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202a8b0(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0202a9bc(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_020e1ae0(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = 5;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_0202a8b0(arg1, 1, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), (s32) M2C_FIELD(arg0, u16 *, 0x2C));
    func_0202a9bc(arg1, 1, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), (s32) M2C_FIELD(arg0, u16 *, 0x2C));
}
