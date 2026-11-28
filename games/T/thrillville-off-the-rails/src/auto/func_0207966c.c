#include "m2c.h"

M2C_UNK func_02016d80();                            /* extern */
M2C_UNK func_0207666c();                            /* extern */

void func_0207966c(void) {
    func_02016d80();
    func_0207666c();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
