#include "m2c.h"

M2C_UNK func_020b2f0c();                            /* extern */
M2C_UNK func_02081928();                            /* extern */

void func_02082598(void) {
    func_020b2f0c();
    func_02081928();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
