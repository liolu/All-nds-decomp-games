/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000db0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02047ce8(M2C_UNK);                     /* extern */
M2C_UNK func_02047d6c(M2C_UNK);                     /* extern */
M2C_UNK func_02047de8();                            /* extern */
M2C_UNK func_02066ae0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_02047c3c(M2C_UNK arg0) {
    func_02047de8();
    *(s16 *) 0x0400000A = 0x3E49;
    func_02047d6c(arg0);
    *(s16 *) 0x0400000E = 0x3F43;
    func_02047ce8(arg0);
    func_02066ae0(1, 0, 0);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFBFFF9F) | 0x40;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1A00;
    func_02000db0(0, 1);
}
