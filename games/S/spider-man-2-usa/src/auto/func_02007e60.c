/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000dc4(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02008738(void *);                      /* extern */

void func_02007e60(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F4), u8 *, 0x86) == 0) {
        return;
    }
    func_02000dc4(M2C_FIELD(arg0, s32 *, 0x2F0) + 0x1C, 0x31, 0x700);
    func_02008738(arg0);
    M2C_FIELD(arg0, s32 *, 0x390) = 0;
    M2C_FIELD(arg0, s32 *, 0x39C) = 0;
}
