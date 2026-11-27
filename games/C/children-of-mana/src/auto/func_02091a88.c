/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203e45c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_02091a88(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0xB0) = (u32) ((u32) (*(s32 *) 0x04001000 & 0x1F00) >> 8);
    *(s32 *) 0x04001000          = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1300;
    func_0203e45c(5, -0x7A, -0x22);
    M2C_FIELD(arg0, s8 *, 0xE5) = 1;
}
