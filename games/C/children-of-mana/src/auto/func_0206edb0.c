/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02058110();                            /* extern */
M2C_UNK func_0206bbb8();                            /* extern */

void func_0206edb0(void) {
    func_02058110();
    func_0206bbb8();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
