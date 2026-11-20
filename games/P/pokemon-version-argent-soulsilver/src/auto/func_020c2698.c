#include "m2c.h"

M2C_UNK func_020bee44();                            /* extern */
M2C_UNK func_020cf564();                            /* extern */

void func_020c2698(void) {
    func_020cf564();
    func_020bee44();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
