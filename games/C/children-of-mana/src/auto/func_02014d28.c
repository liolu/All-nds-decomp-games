/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0200ffe8(s16);                         /* extern */

void func_02014d28(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x6C) == 0) {
        return;
    }
    func_0200ffe8(M2C_FIELD(arg0, s16 *, 8));
    M2C_FIELD(arg0, s16 *, 8)   = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_02001cc8(arg0 + 0x10, 0, 0x5C);
    M2C_FIELD(arg0, u8 *, 0x6C) = 0U;
}
