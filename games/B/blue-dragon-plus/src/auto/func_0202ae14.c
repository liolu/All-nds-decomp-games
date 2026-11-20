#include "m2c.h"

M2C_UNK func_02027c74();                            /* extern */
M2C_UNK func_02034b10();                            /* extern */

void func_0202ae14(void) {
    func_02034b10();
    func_02027c74();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
