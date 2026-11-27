/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020485c8(M2C_UNK);                     /* extern */
M2C_UNK func_020487d0(M2C_UNK);                     /* extern */
M2C_UNK func_020487d4();                            /* extern */
M2C_UNK func_02066ac4(M2C_UNK);                     /* extern */

void func_02048534(M2C_UNK arg0) {
    func_020487d4();
    *(s16 *) 0x0400100A = 0x3F41;
    func_020487d0(arg0);
    *(s16 *) 0x0400100C = 0x3E44;
    func_020485c8(arg0);
    func_02066ac4(0);
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x60) | 0x40;
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1600;
}
