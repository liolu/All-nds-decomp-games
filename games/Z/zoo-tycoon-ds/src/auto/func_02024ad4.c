/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02024b84(M2C_UNK);                     /* extern */
M2C_UNK func_02024bf0(M2C_UNK);                     /* extern */
M2C_UNK func_02024bf4(M2C_UNK);                     /* extern */
M2C_UNK func_02024c78();                            /* extern */
M2C_UNK func_02066ac4(M2C_UNK);                     /* extern */

void func_02024ad4(M2C_UNK arg0) {
    func_02024c78();
    *(s16 *) 0x04001008 = 0x3D58;
    func_02024bf4(arg0);
    *(s16 *) 0x0400100A = 0x3E51;
    func_02024bf0(arg0);
    *(s16 *) 0x0400100E = 0x3FC2;
    func_02024b84(arg0);
    func_02066ac4(0);
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x60) | 0x40;
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1B00;
}
