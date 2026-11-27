/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000db0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02021f34(M2C_UNK);                     /* extern */
M2C_UNK func_02022518(M2C_UNK);                     /* extern */
M2C_UNK func_02022670();                            /* extern */
M2C_UNK func_02066ae0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_02021e88(M2C_UNK arg0) {
    func_02022670();
    *(s16 *) 0x04000008 = 0x3C52;
    func_02022518(arg0);
    *(s16 *) 0x0400000A = 0x3D41;
    func_02021f34(arg0);
    func_02066ae0(1, 0, 0);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x10;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFBFFF9F) | 0x40;
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1300;
    func_02000db0(0, 1);
}
