/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02020638();                            /* extern */
M2C_UNK func_02066ac4(M2C_UNK);                     /* extern */

void func_020205c4(void) {
    func_02020638();
    *(s16 *) 0x0400100E = 0x3FC3;
    func_02066ac4(0);
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x60) | 0x40;
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x800;
}
