/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022e48(M2C_UNK, s32);                /* extern */
M2C_UNK func_02022e6c();                            /* extern */
M2C_UNK func_0201c59c(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_0201ad34(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02022e48(arg2, (arg0 + 0x1F) & ~0x1F);
    func_02022e6c();
    func_0201c59c(arg2, arg0, arg1);
}
