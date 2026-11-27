/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000db0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02055f30(M2C_UNK);                     /* extern */
M2C_UNK func_02055f3c();                            /* extern */
M2C_UNK func_02066ae0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_02055ea0(M2C_UNK arg0) {
    func_02055f3c();
    *(s16 *) 0x04000008 = 0x3C52;
    func_02055f30(arg0);
    func_02066ae0(1, 0, 0);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFBFFF9F) | 0x40;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1100;
    func_02000db0(0, 1);
}
