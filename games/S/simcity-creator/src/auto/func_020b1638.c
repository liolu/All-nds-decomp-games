#include "m2c.h"

M2C_UNK func_02001430();                            /* extern */
M2C_UNK func_0200675c();                            /* extern */

void func_020b1638(void) {
    func_02001430();
    *(s32 *) 0x04001000 |= 0x10000;
    func_0200675c();
    *(u16 *) 0x04000304 |= 0x8000;
}
